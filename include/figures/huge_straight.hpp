//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_HUGE_STRAIGHT_HPP
#define PROJET_COO_HUGE_STRAIGHT_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"
#include "../constant.hpp"

namespace game::figures {
    class huge_straight : public game::figures::figure {
        int _start_val;
        static const int POINTS_SUCCESS = 40;
    public:
        huge_straight();
        huge_straight(const figures::huge_straight & hs);
        void parse(game::roll::dice dices[NB_DICE]) override;
    };
}

#endif //PROJET_COO_HUGE_STRAIGHT_HPP
