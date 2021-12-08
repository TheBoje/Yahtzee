//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_FIGURE_HPP
#define PROJET_COO_FIGURE_HPP

#include "dice.hpp"

namespace yahtzee::figures {
    class figure {
    protected:
        int _points = 0;
    public:
        virtual void parse(yahtzee::dice dices[]) = 0;
        int get_points();
    };
}

#endif //PROJET_COO_FIGURE_HPP
