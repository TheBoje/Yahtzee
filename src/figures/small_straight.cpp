//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/small_straight.hpp"

game::figures::small_straight::small_straight() { }

game::figures::small_straight::~small_straight() { }

void game::figures::small_straight::parse(game::roll::dice dices[5]) {

}

game::figures::small_straight::small_straight(const game::figures::small_straight &ss) {
    _points = ss._points;
    _start_val = ss._start_val;
}
