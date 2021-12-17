//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_TOAK_HPP
#define PROJET_COO_TOAK_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"
#include "../constant.hpp"

namespace game::figures {
    class toak : public game::figures::figure {
        int _value;
    public:
        toak();
        toak(const figures::toak & t);

        /* Accept only three of a kind, 3 times the same dice.
         * _points is set to the sum of the dices values
         * _value is set to the dice value of the square
         */
        void parse(game::roll::dice* dices[NB_DICE]) override;
    };
}


#endif //PROJET_COO_TOAK_HPP
