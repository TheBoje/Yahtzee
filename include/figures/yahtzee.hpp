//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_YAHTZEE_HPP
#define PROJET_COO_YAHTZEE_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"
#include "../constant.hpp"

namespace game::figures {
    class yahtzee : public game::figures::figure {
        int _value;
        static const int POINTS_SUCCESS = 50;
    public:
        yahtzee();
        yahtzee(const figures::yahtzee & y);

        /* Accept only a yahtzee, 5 times the same dice.
         * _points is set to POINTS_SUCCESS if parsing is successful
         * _value is set to the dice value of the yahtzee
         */
        void parse(game::roll::dice dices[NB_DICE]) override;
    };
}

#endif //PROJET_COO_YAHTZEE_HPP
