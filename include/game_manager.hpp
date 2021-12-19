//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_GAME_MANAGER_HPP
#define PROJET_COO_GAME_MANAGER_HPP

#include <vector>
#include "difficulty/level.hpp"
#include "entity/player.hpp"
#include "roll/roll.hpp"

namespace game {
    class game_manager {
    private:
        std::vector<game::entity::player> _players;
        game::difficulty::level * _level; // Is a pointer because it's an abstract class
        game::roll::roll _roll;
        int turn_count = 0;

    public:
        game_manager(const game::difficulty::level_enum& level, int player_count);
        game_manager(const game_manager& gm);

        ~game_manager();

        game_manager& operator=(const game_manager& gm);



        bool turn();
    };
}

#endif //PROJET_COO_GAME_MANAGER_HPP
