//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_LEVEL_HPP
#define PROJET_COO_LEVEL_HPP

#include <vector>
#include "../entity/player.hpp"
#include "../roll/roll.hpp"

namespace game::difficulty {
    enum class level_enum {
        EASY = 0,
        MEDIUM = 1,
        HARD = 2,
        IMPOSSIBLE = 3
    };

    class level {
    protected:
        std::vector<game::entity::player> _players; // NOTE(Louis): Protected ?
    public:
        /**
         * The turn will be defined by the difficulty level. A turn is (most of the time) one round between
         * all players. It's the level that decide how the figures needs to be filled.
         * @param r dices that will be rolled during the game
         * @param players vector of players playing
         */
        virtual void turn(game::roll::roll& r, const std::vector<game::entity::player>& players) = 0;
        virtual ~level();
    };
}

#endif //PROJET_COO_LEVEL_HPP
