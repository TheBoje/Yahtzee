//
// Created by Louis Leenart on 08/12/2021.
//

#include "../../include/roll/dice.hpp"

yahtzee::roll::dice::dice() {
    _value = 0; // TODO(Louis): this is not the way ! Init this as random[1, 6]
}

void yahtzee::roll::dice::roll() {

}

int yahtzee::roll::dice::get_value() const {
    return _value;
}

std::ostream &yahtzee::roll::dice::operator<<(std::ostream &os) {
    return os;
}

int yahtzee::roll::dice::operator+(const yahtzee::roll::dice &dice1) {
    return 0;
}
