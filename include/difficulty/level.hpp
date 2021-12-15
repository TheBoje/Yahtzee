//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_LEVEL_HPP
#define PROJET_COO_LEVEL_HPP

#include <vector>
#include "../entity/player.hpp"
#include "../roll/roll.hpp"

namespace game::difficulty {
    class level {
    protected:
        std::vector<game::entity::player> _players; // NOTE(Louis): Protected ?
    public:
        //level(std::vector<game::entity::player> players); // TODO(Louis): Ca fait une copie du vecteur ou un passage par référence?
        virtual void turn(const game::roll::roll& r, const std::vector<game::entity::player>& players) = 0;
    };
}

#endif //PROJET_COO_LEVEL_HPP
