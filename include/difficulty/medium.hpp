//
// Created by altimor on 08/12/2021.
//

#ifndef PROJET_COO_MEDIUM_HPP
#define PROJET_COO_MEDIUM_HPP

#include "level.hpp"

namespace game::difficulty {
    class medium : public level {
    public:
        /**
         * A medium turn let the player choose which figure he wants to fill in the sup part first and after completing
         * the sup part, choose which figure in the inf part.
         * */
        void turn(game::roll::roll &r, const std::vector<game::entity::player> &players);
    };
}

#endif //PROJET_COO_MEDIUM_HPP
