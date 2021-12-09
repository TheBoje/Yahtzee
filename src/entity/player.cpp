//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/entity/player.hpp"
#include "../../include/figures/figure.hpp"
#include "../../include/figures/sup_part.hpp"
#include "../../include/figures/toak.hpp"
#include "../../include/figures/small_straight.hpp"
#include "../../include/figures/huge_straight.hpp"
#include "../../include/figures/full.hpp"
#include "../../include/figures/square.hpp"
#include "../../include/figures/yahtzee.hpp"
#include "../../include/figures/chance.hpp"

game::entity::player::player(std::string name) : _name(std::move(name)) {
    // Fill _figures with empty figures!
    _figures.push_back(new game::figures::sup_part<1>());
    _figures.push_back(new game::figures::sup_part<2>());
    _figures.push_back(new game::figures::sup_part<3>());
    _figures.push_back(new game::figures::sup_part<4>());
    _figures.push_back(new game::figures::sup_part<5>());
    _figures.push_back(new game::figures::sup_part<6>());
    _figures.push_back(new game::figures::toak());
    _figures.push_back(new game::figures::small_straight());
    _figures.push_back(new game::figures::huge_straight());
    _figures.push_back(new game::figures::full());
    _figures.push_back(new game::figures::square());
    _figures.push_back(new game::figures::yahtzee());
    _figures.push_back(new game::figures::chance());
}

int game::entity::player::get_score() {
    int sum = 0;
    for (const game::figures::figure * f : _figures) {
        sum += f->get_points(); // overload op += ?
    }
    return sum;
}

void game::entity::player::turn() {
    // TODO(Louis): implement me!
    std::cout << "TODO player.turn()" << std::endl;
}
