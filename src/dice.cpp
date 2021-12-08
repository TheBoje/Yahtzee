//
// Created by Louis Leenart on 08/12/2021.
//

#include "../include/dice.hpp"

yahtzee::dice::dice() {
    _value = 0; // TODO(Louis): this is not the way ! Init this as random[1, 6]
}

void yahtzee::dice::roll() {

}

int yahtzee::dice::get_value() const {
    return _value;
}

std::ostream &yahtzee::dice::operator<<(std::ostream &os) {
    return os;
}

int yahtzee::dice::operator+(const yahtzee::dice &dice1) {
    return 0;
}
