//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/figure.hpp"

int game::figures::figure::get_points() const {
    return _points;
}

int game::figures::operator+=(int rh, const game::figures::figure & lh) {
    return rh + lh.get_points();
}