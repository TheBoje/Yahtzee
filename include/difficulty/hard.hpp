//
// Created by altimor on 08/12/2021.
//

#ifndef PROJET_COO_HARD_HPP
#define PROJET_COO_HARD_HPP

#include "level.hpp"

namespace game::difficulty {
    class hard : public level {
        int _num_figure;
    public:
        hard();

        /**
         * A hard turn choose the figures in the order.
         * */
        void turn(game::roll::roll &r, const std::vector<game::entity::player> &players);
    };
}

#endif //PROJET_COO_HARD_HPP
