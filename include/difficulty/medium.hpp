//
// Created by altimor on 08/12/2021.
//

#ifndef PROJET_COO_MEDIUM_HPP
#define PROJET_COO_MEDIUM_HPP

#include "level.hpp"

namespace game::difficulty {
    class medium : public level {
    public:
        void turn(game::roll::roll &r, const std::vector<game::entity::player> &players);
    };
}

#endif //PROJET_COO_MEDIUM_HPP
