//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/huge_straight.hpp"

game::figures::huge_straight::huge_straight() {

}

game::figures::huge_straight::~huge_straight() {

}

void game::figures::huge_straight::parse(game::roll::dice *dices) {

}

game::figures::huge_straight::huge_straight(const game::figures::huge_straight &hs) {
    _points = hs._points;
    _start_val = hs._start_val;
}
