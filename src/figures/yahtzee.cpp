//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/yahtzee.hpp"

game::figures::yahtzee::yahtzee() : _value(0) { }

void game::figures::yahtzee::parse(game::roll::dice* dices[NB_DICE]) {
    std::cout << "Parsing yahtzee figure" << std::endl;
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
    std::cout << "Yahtzee figure points : " << _points << std::endl;

    _is_set = true;
}

game::figures::yahtzee::yahtzee(const game::figures::yahtzee &y) {
    _points = y._points;
    _value = y._value;
}
