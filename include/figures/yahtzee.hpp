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
        void parse(game::roll::dice dices[NB_DICE]) override;
    };
}

#endif //PROJET_COO_YAHTZEE_HPP
