//
// Created by Louis Leenart on 09/12/2021.
//

#include <algorithm>
#include "../../include/figures/toak.hpp"

game::figures::toak::toak() : _value(0) {

}

void game::figures::toak::parse(game::roll::dice* dices[NB_DICE]) {
    // Searching for 3 times the same dice value.
    std::sort(dices, dices + NB_DICE, game::roll::dice::comp);

    int max_count = 1;
    int res = dices[0]->get_value();
    int curr_count = 1;
    for (int i = 1; i < NB_DICE; i++) {
        if (dices[i]->get_value() == dices[i - 1]->get_value()) {
            curr_count++;
        } else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = dices[i - 1]->get_value();
            }
            curr_count = 1;
        }
    }

    // if the last element is the most frequent one
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = dices[NB_DICE - 1]->get_value();
    }


    if (max_count >= 3) {
        _points = 0;
        for (int i = 0; i < NB_DICE; i++) {
            _points = *dices[i] + _points;
        }
        _value = res;
    }
}

game::figures::toak::toak(const game::figures::toak &t)  {
    _points = t._points;
    _value = t._value;
}
