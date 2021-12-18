//
// Created by altimor on 08/12/2021.
//

#ifndef PROJET_COO_IMPOSSIBLE_HPP
#define PROJET_COO_IMPOSSIBLE_HPP

#include "level.hpp"
#include <array>

namespace game::difficulty {
    class impossible : public level {
        std::array<int, NB_TURNS> _order;
        int _fig_index;
    public:
        impossible();
        void turn(game::roll::roll& r, const std::vector<game::entity::player>& players);
    };
}

#endif //PROJET_COO_IMPOSSIBLE_HPP
