//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/chance.hpp"
#include "../include/constant.hpp"

game::figures::chance::chance() {

}

void game::figures::chance::parse(game::roll::dice **dices) {
    // Sum of all dices values
    _points = 0;
    for (int i = 0; i < game::NB_DICE; i++) {
       _points = *dices[i] + _points;
    }
    _is_set = true;
}

game::figures::chance::chance(const game::figures::chance &c) {
    _points = c._points;
}
