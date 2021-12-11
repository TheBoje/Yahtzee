//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/toak.hpp"

game::figures::toak::toak() {

}

void game::figures::toak::parse(game::roll::dice *dices) {

}

game::figures::toak::toak(const game::figures::toak &t)  {
    _points = t._points;
    _value = t._value;
}
