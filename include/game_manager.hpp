//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_GAME_MANAGER_HPP
#define PROJET_COO_GAME_MANAGER_HPP

#include <vector>

namespace yahtzee {
    class game_manager {
    private:
        std::vector<yahtzee::entity::players> _players;
        yahtzee::difficulty::level _level;
        yahtzee::roll _roll;

    public:
        game_manager(yahtzee::difficulty::level level);
        bool turn();
    };
}

#endif //PROJET_COO_GAME_MANAGER_HPP
