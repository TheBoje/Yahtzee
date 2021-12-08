//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_GAME_MANAGER_HPP
#define PROJET_COO_GAME_MANAGER_HPP

#include <vector>
#include "level.hpp"
#include "player.hpp"
#include "roll.hpp"

namespace yahtzee {
    class game_manager {
    private:
        std::vector<yahtzee::entity::player> _players;
        yahtzee::difficulty::level _level;
        yahtzee::roll _roll;

    public:
        game_manager(yahtzee::difficulty::level level);
        bool turn();
    };
}

#endif //PROJET_COO_GAME_MANAGER_HPP
