//
// Created by Louis Leenart on 09/12/2021.
//

#include <algorithm>
#include "../../include/figures/square.hpp"

game::figures::square::square() {

}


void game::figures::square::parse(game::roll::dice* dices[NB_DICE]) {
    std::cout << "Parsing square figure" << std::endl;

    // Searching for 4 times the same dice value.
    std::sort(dices, dices + NB_DICE, game::roll::dice::comp);

    int value_fst = dices[0]->get_value();
    int value_lst = dices[NB_DICE - 1]->get_value();
    int count_fst = 1, count_lst = 1;
    for (int i = 1; i < NB_DICE - 1; i++) {
        if (dices[i]->get_value() == value_fst) {
            count_fst++;
        } else if (dices[i]->get_value() == value_lst) {
            count_lst++;
        } else {
            break;
        }
    }
    std::cout << "fst : " << count_fst << " lst : " << count_lst << std::endl;
    if (count_fst >= 4 || count_lst >= 4) {
        _points = 0;
        for (int i = 0; i < NB_DICE; i++) {
            _points = *dices[i] + _points;
        }
        _value = (count_fst >= 4 ? value_fst : value_lst);
    }
    std::cout << "Square figure points : " << _points << std::endl;

    _is_set = true;
}

game::figures::square::square(const game::figures::square &s) {
    _points = s._points;
    _value = s._value;
}
