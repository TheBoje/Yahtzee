//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/huge_straight.hpp"
#include <algorithm>


game::figures::huge_straight::huge_straight() : game::figures::figure("huge straight"), _start_val(0)
{}

void game::figures::huge_straight::parse(game::roll::dice* dices[NB_DICE]) {
    // Searching for a straight of 5 dices, spaced by one (dices[n] = dices[n + 1] - 1)
    std::sort(dices, dices + NB_DICE, game::roll::dice::comp);
    bool is_valid = true;

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
    _is_set = true;
}

game::figures::huge_straight::huge_straight(const game::figures::huge_straight &hs) : game::figures::figure("huge straight") {
    _points = hs._points;
    _start_val = hs._start_val;
}
