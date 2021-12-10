//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_FIGURE_HPP
#define PROJET_COO_FIGURE_HPP

#include "../roll/dice.hpp"
 
namespace game::figures {
    class figure {
    protected:
        int _points = 0;
    public:
        virtual ~figure() = default;
        virtual void parse(game::roll::dice dices[]) = 0;
        int get_points() const;
        //int operator+ (const figure & f) const;
    };
    //int operator+= (int v, const game::figures::figure & f);
}

#endif //PROJET_COO_FIGURE_HPP
