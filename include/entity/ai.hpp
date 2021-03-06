//
// Created by Louis Leenart on 08/12/2021.
//

#ifndef PROJET_COO_AI_HPP
#define PROJET_COO_AI_HPP

#include "player.hpp"

namespace game::entity {
    class ai : public player {
    public:
        void turn(roll::roll& roll) const override;
    };
}

#endif //PROJET_COO_AI_HPP
