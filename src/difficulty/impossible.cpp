//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/difficulty/impossible.hpp"

#include <algorithm>
#include <random>
#include <chrono>

game::difficulty::impossible::impossible() : _fig_index(0)
{
    for(int i = 0; i < NB_TURNS; i++)
    {
        _order[i] = i;
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::shuffle(_order.begin(), _order.end(), std::default_random_engine(seed));

    std::cout << "Figures needs to be filled as follow : ";
    for(const int& val : _order)
    {
        std::cout << val << " ";
    }
    std::cout  << std::endl;
}

void game::difficulty::impossible::turn(game::roll::roll &r, const std::vector<game::entity::player> &players) {
    for(int i = 0; i < players.size(); i++)
    {
        std::cout << "Figure à remplir : " << _order[_fig_index] << std::endl;
        players[i].turn(r);

        players[i].add_figure(_order[_fig_index], r);
        r.reset();
        std::cout << "player points : " << players[i].get_score() << std::endl;
    }
    _fig_index++;
}
