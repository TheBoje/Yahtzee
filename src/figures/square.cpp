//
// Created by Louis Leenart on 09/12/2021.
//

#include <algorithm>
#include "../../include/figures/square.hpp"

game::figures::square::square() {

}


void game::figures::square::parse(game::roll::dice* dices[NB_DICE]) {
    // Searching for 4 times the same dice value.
    std::sort(&dices[0], &dices[NB_DICE - 1]);

    int value_fst = dices[0]->get_value();
    int value_lst = dices[NB_DICE - 1]->get_value();
    int count_fst = 1, count_lst = 1;
    for (int i = 2; i < NB_DICE; i++) {
        if (dices[i]->get_value() == value_fst) {
            count_fst++;
        } else if (dices[i]->get_value() == value_lst) {
            count_lst++;
        } else {
            break;
        }
    }

    if (count_fst >= 4 || count_lst >= 4) {
        _points = 0;
        for (int i = 0; i < NB_DICE; i++) {
            _points = *dices[i] + _points;
        }
        _value = (count_fst >= 4 ? value_fst : value_lst);
    }
}

game::figures::square::square(const game::figures::square &s) {
    _points = s._points;
    _value = s._value;
}
