//
// Created by Louis Leenart on 09/12/2021.
//

#include <algorithm>
#include "../include/figures/full.hpp"
#include "../include/constant.hpp"

game::figures::full::full() : _value_pair(0), _value_toak(0) { }

void game::figures::full::parse(game::roll::dice dices[NB_DICE]) {
    std::sort(&dices[0], &dices[NB_DICE - 1]);
    int first_val = dices[0].get_value();
    int last_val = dices[NB_DICE - 1].get_value();
    int first_count = 1;
    int last_count = 1;
    for (int i = 1; i < NB_DICE - 1; i++) {
        if (dices[i].get_value() == first_val) {
            first_count++;
        } else if (dices[i].get_value() == last_val) {
            last_count++;
        } else {
            break;
        }
    }

    if (first_count == 3 && last_count == 2) {
        _points = POINTS_SUCCESS;
        _value_pair = last_val;
        _value_toak = first_val;
    } else if (first_count == 2 && last_count == 3) {
        _points = POINTS_SUCCESS;
        _value_pair = first_val;
        _value_toak = last_val;
    }
}

game::figures::full::full(const game::figures::full &f) {
    _points = f._points;
}
