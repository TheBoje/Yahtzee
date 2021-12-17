//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_CHANCE_HPP
#define PROJET_COO_CHANCE_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"

namespace game::figures {
    class chance : public game::figures::figure {
    public:
        chance();
        chance(const figures::chance & c);

        /* Accept every dice combination.
         * _points is the sum of the value of each dice.
         */
        void parse(game::roll::dice* dices[NB_DICE]) override;
    };
}

#endif //PROJET_COO_CHANCE_HPP
