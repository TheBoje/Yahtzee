//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/difficulty/hard.hpp"

game::difficulty::hard::hard() : _num_figure(0)
{}

void game::difficulty::hard::turn(game::roll::roll &r, const std::vector<game::entity::player> &players) {
    for(int i = 0; i < players.size(); i++)
    {
        players[i].turn(r);

        std::cout << "Figure à remplir : " << _num_figure << std::endl;
        players[i].add_figure(_num_figure, r);
        r.reset();
        std::cout << "player points : " << players[i].get_score() << std::endl;
    }
    _num_figure++;

}
