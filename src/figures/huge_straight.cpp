//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/huge_straight.hpp"
#include <algorithm>


game::figures::huge_straight::huge_straight() : _start_val(0) { }

void game::figures::huge_straight::parse(game::roll::dice* dices[NB_DICE]) {
    std::cout << "Parsing huge straight figure" << std::endl;
    // Searching for a straight of 5 dices, spaced by one (dices[n] = dices[n + 1] - 1)
    std::sort(dices, dices + NB_DICE, game::roll::dice::comp);
    bool is_valid = true;

    for (int i = 0; i < NB_DICE; i++) {
        std::cout << dices[i]->get_value();
    }
    std::cout << std::endl;

    for (int i = 0; i < NB_DICE - 1; i++) {
        if (dices[i]->get_value() != dices[i + 1]->get_value() - 1) {
            is_valid = false;
            break;
        }
    }

    if (is_valid) {
        _points = POINTS_SUCCESS;
        _start_val = dices[0]->get_value();
    }
    std::cout << "Huge straight figure points : " << _points << std::endl;

    _is_set = true;
}

game::figures::huge_straight::huge_straight(const game::figures::huge_straight &hs) {
    _points = hs._points;
    _start_val = hs._start_val;
}
