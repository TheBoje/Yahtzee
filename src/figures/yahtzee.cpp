//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/yahtzee.hpp"

game::figures::yahtzee::yahtzee() : _value(0), game::figures::figure("yahtzee")
{}

void game::figures::yahtzee::parse(game::roll::dice* dices[NB_DICE]) {
    // Searching for 5 times the same dice value.
    int value = dices[0]->get_value();
    int count = 1;
    for (int i = 1; i < NB_DICE; i++) {
        if (dices[i]->get_value() == value) {
            count++;
        }
    }

    if (count == 5) {
        _points = POINTS_SUCCESS;
        _value = value;
    }

    _is_set = true;
}

game::figures::yahtzee::yahtzee(const game::figures::yahtzee &y) : game::figures::figure("yahtzee") {
    _points = y._points;
    _value = y._value;
}
