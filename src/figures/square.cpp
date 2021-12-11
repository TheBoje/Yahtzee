//
// Created by Louis Leenart on 09/12/2021.
//

#include <algorithm>
#include "../../include/figures/square.hpp"

game::figures::square::square() {

}


void game::figures::square::parse(game::roll::dice dices[NB_DICE]) {
    bool is_valid = true;
    int value = dices[0].get_value();
    bool wildcard = true;
    for (int i = 1; i < NB_DICE; i++) {
        if (dices[i].get_value() == value) {
        } else if (wildcard) {
            wildcard = false;
        } else {
            is_valid = false;
            break;
        }
    }

    if (is_valid) {
        _points = 0;
        for (int i = 0; i < NB_DICE; i++) {
            _points = dices[i] + _points;
        }
        _value = value;
    } else {
        _points = 0;
    }
}

game::figures::square::square(const game::figures::square &s) {
    _points = s._points;
    _value = s._value;
}
