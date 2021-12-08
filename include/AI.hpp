//
// Created by Louis Leenart on 08/12/2021.
//

#ifndef PROJET_COO_AI_HPP
#define PROJET_COO_AI_HPP

#include "player.hpp"

namespace yahtzee::entity {
    class AI : public player {
    public:
        void turn() override;
    };
}

#endif //PROJET_COO_AI_HPP
