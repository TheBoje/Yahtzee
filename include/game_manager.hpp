//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_GAME_MANAGER_HPP
#define PROJET_COO_GAME_MANAGER_HPP

#include <vector>
#include "difficulty/level.hpp"
#include "entity/player.hpp"
#include "roll/roll.hpp"

namespace yahtzee {
    class game_manager {
    private:
        std::vector<yahtzee::entity::player> _players;
        yahtzee::difficulty::level * _level; // Is a pointer because it's an abstract class
        yahtzee::roll::roll _roll;

    public:
        game_manager(yahtzee::difficulty::level * level);
        ~game_manager();
        bool turn();
    };
}

#endif //PROJET_COO_GAME_MANAGER_HPP
