//
// Created by altimor on 08/12/2021.
//

#ifndef PROJET_COO_EASY_HPP
#define PROJET_COO_EASY_HPP

#include "level.hpp"
#include "../include/roll/roll.hpp"


namespace game::difficulty {
    class easy : public level {
    public:
        void turn(game::roll::roll& r, const std::vector<game::entity::player>& players);
    };
}

#endif //PROJET_COO_EASY_HPP
