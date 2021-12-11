//
// Created by Louis Leenart on 09/12/2021.
//

#include <algorithm>
#include "../../include/figures/square.hpp"

game::figures::square::square() {

}


void game::figures::square::parse(game::roll::dice dices[NB_DICE]) {

}

game::figures::square::square(const game::figures::square &s) {
    _points = s._points;
    _value = s._value;
}
