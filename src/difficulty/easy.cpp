//
// Created by Louis Leenart on 08/12/2021.
//

#include "../../include/difficulty/easy.hpp"

void game::difficulty::easy::turn(game::roll::roll &r, const std::vector<game::entity::player> &players) {
    for(const game::entity::player & player : players)
    {
        player.turn(r);

        int figure;

        do {
            std::cout << "Selected figure : ";
            player.print_available_figures();
            std::cin >> figure;
        } while (!player.add_figure(figure, r));

        r.reset();
        std::cout << "Player points : " << player.get_score() << std::endl;
    }
}
