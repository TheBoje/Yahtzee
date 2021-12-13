//
// Created by Louis Leenart on 08/12/2021.
//

#include "../../include/roll/dice.hpp"
#include "../../include/constant.hpp"

game::roll::dice::dice() : _value(0), _distrib(MIN_VALUE, MAX_VALUE), _gen(_rd())
{}


game::roll::dice::dice(const game::roll::dice &src) : _value(src._value)
{}

void game::roll::dice::roll() {
    _value = _distrib(_gen);
}

int game::roll::dice::get_value() const {
    return _value;
}

int game::roll::dice::operator+(const game::roll::dice &dice1) const {
    return _value + dice1._value;
}

int game::roll::dice::operator+(int val) const {
    return _value + val;
}

std::ostream &game::roll::operator<<(std::ostream &os, const dice& d) {

    //TODO 6 printing as 4
    os << DICE_TOP << std::endl;
    os << ((d.get_value() > 3) ? DICE_TWO_IN_ROW : ((d.get_value() > 1) ? DICE_ONE_IN_ROW_LEFT : DICE_BLANK)) << std::endl;
    os << ((d.get_value() == 6 ? DICE_TWO_IN_ROW : (d.get_value() % 2 == 0) ? DICE_BLANK : DICE_ONE_IN_ROW_CENTERED)) << std::endl;
    os << ((d.get_value() > 3) ? DICE_TWO_IN_ROW : ((d.get_value() > 1) ? DICE_ONE_IN_ROW_RIGHT : DICE_BLANK)) << std::endl;
    os << DICE_BOTTOM << std::endl;

    return os;
}

bool game::roll::dice::operator<(const game::roll::dice &d) const {
    return (_value < d._value);
}

