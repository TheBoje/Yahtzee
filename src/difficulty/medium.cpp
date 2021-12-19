//

#include "../../include/difficulty/medium.hpp"

//
// Created by Louis Leenart on 09/12/2021.

void game::difficulty::medium::turn(game::roll::roll &r, const std::vector<game::entity::player> &players) {
    for(const game::entity::player & player : players)
    {
        player.turn(r);

        bool valid_choice = false;
        int figure;

        do {
            std::cout << "Selected figure : ";
            player.print_available_figures();
            std::cin >> figure;

            if(!player.is_sup_part_done())
            {
                if(figure >= 0 && figure < NB_TURNS / 2)
                    valid_choice = player.add_figure(figure, r);
                else
                    std::cout << "Please choose a sup part figure" << std::endl;
            }
            else
            {
                if(figure >= NB_TURNS / 2 && figure < NB_TURNS)
                    valid_choice = player.add_figure(figure, r);
                else
                    std::cout << "Please choose an inf part figure" << std::endl;
            }

        } while (!valid_choice);




        r.reset();
        std::cout << "Player points : " << player.get_score() << std::endl;
    }
}
