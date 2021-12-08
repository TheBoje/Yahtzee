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
        int get_points() const; // TODO(Louis): implémenter ici!
        virtual int operator+ (const figure & f) = 0;
    };

    int figure::get_points() const {
        return _points;
    }
}

#endif //PROJET_COO_FIGURE_HPP
