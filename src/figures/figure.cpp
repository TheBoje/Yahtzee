//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/figures/figure.hpp"

#include <utility>

int game::figures::figure::get_points() const {
    return _points;
}

bool game::figures::figure::get_is_set() const {
    return _is_set;
}

std::string game::figures::figure::get_label() const {
    return _label;
}

game::figures::figure::figure(std::string label) : _label(std::move(label))
{}
