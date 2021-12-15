//
// Created by Louis Leenart on 08/12/2021.
//

#include "../../include/roll/dice.hpp"
#include "../../include/constant.hpp"

game::roll::dice::dice() : _value(0), _is_kept(false)
{
    std::srand(time(nullptr));
}

game::roll::dice::dice(int rand_offset) : _value(0), _is_kept(false)
{
    // TODO solution temporaire car le random_device bug
    std::srand(time(nullptr) + rand_offset);
}

game::roll::dice::dice(const game::roll::dice &src) : _value(src._value), _is_kept(src._is_kept)
{}

void game::roll::dice::roll() {
    //_value = _distrib(_gen);
    _is_kept = false;
    _value = rand() % MAX_VALUE + MIN_VALUE;
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

bool game::roll::dice::get_is_kept() const {
    return _is_kept;
}

void game::roll::dice::keep() {
    _is_kept = true;
}

std::vector<std::string> game::roll::dice::get_print_vector() {
    std::vector<std::string> printable;
    printable.reserve(5);

    printable.push_back(DICE_TOP);
    printable.push_back((_value > 3) ? DICE_TWO_IN_ROW : ((_value > 1) ? DICE_ONE_IN_ROW_LEFT : DICE_BLANK));
    printable.push_back((_value == 6 ? DICE_TWO_IN_ROW : (_value % 2 == 0) ? DICE_BLANK : DICE_ONE_IN_ROW_CENTERED));
    printable.push_back((_value > 3) ? DICE_TWO_IN_ROW : ((_value > 1) ? DICE_ONE_IN_ROW_RIGHT : DICE_BLANK));
    printable.push_back(DICE_BOTTOM);

    return printable;
}

