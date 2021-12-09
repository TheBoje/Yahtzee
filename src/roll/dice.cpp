//
// Created by Louis Leenart on 08/12/2021.
//

#include "../../include/roll/dice.hpp"

game::roll::dice::dice() {
    _value = 0; // TODO(Louis): this is not the way ! Init this as random[1, 6]
}

void game::roll::dice::roll() {

}

int game::roll::dice::get_value() const {
    return _value;
}

std::ostream &game::roll::dice::operator<<(std::ostream &os) {
    return os;
}

int game::roll::dice::operator+(const game::roll::dice &dice1) {
    return 0;
}
