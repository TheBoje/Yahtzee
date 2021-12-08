//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_LEVEL_HPP
#define PROJET_COO_LEVEL_HPP

#include <vector>

namespace yahtzee::difficulty {
    class level {
    protected:
        std::vector<yahtzee::entity::players> _players;
    public:
        level(std::vector<yahtzee::entity::players> players); // TODO(Louis): Ca fait une copie du vecteur ou un passage par référence?
        virtual void turn() = 0;
    };
}

#endif //PROJET_COO_LEVEL_HPP
