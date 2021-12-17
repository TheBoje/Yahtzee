//
// Created by Louis Leenart on 08/12/2021.
//

#include "../../include/difficulty/easy.hpp"

void game::difficulty::easy::turn(game::roll::roll &r, const std::vector<game::entity::player> &players) {
    for(int i = 0; i < players.size(); i++)
    {
        players[i].turn(r);

        std::cout << "Choix de la figure à remplir : ";
        int figure;
        std::cin >> figure;


        players[i].add_figure(figure, r);
        r.reset();
        std::cout << "player points : " << players[i].get_score() << std::endl;
    }
}
