//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/yahtzee.hpp"

void game::figures::yahtzee::parse(game::roll::dice *dices) {

}

game::figures::yahtzee::~yahtzee() {

}

game::figures::yahtzee::yahtzee() {

}

game::figures::yahtzee::yahtzee(const game::figures::yahtzee &y) {
    _points = y._points;
    _value = y._value;
}
