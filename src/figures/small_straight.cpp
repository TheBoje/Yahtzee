//
// Created by Louis Leenart on 09/12/2021.
//

#include <algorithm>
#include "../../include/figures/small_straight.hpp"

game::figures::small_straight::small_straight() { }


void game::figures::small_straight::parse(game::roll::dice dices[NB_DICE]) {
    // Searching for a straight of 4 dices, spaced by one (dices[n] = dices[n + 1] - 1)
    std::sort(&dices[0], &dices[NB_DICE - 1]);
    int wildcard = 0;
    for (int i = 0; i < NB_DICE - 1; i++) {
        /* For a small straight of NB_DICE - 1 dices, it means
         * that we can find only one wildcard (d[i] = d[i+1]
         * or d[i] < d[i+1] - 1). If we find more, this is not
         * a small_straight!
         * */
        if (dices[i].get_value() != dices[i].get_value() - 1){
            wildcard += 1;
        }
    }
    if (wildcard <= 1) {
        _points = POINTS_SUCCESS;

        /* start val is either the first or the second dice of the sorted list
         * if d[0] and d[1] are following, d[0] is the start value, else its d[1]
         * */
        _start_val = (dices[0].get_value() == dices[1].get_value() - 1 ? dices[0].get_value() : dices[1].get_value());
    }
}

game::figures::small_straight::small_straight(const game::figures::small_straight &ss) {
    _points = ss._points;
    _start_val = ss._start_val;
}
