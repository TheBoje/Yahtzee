//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_SMALL_STRAIGHT_HPP
#define PROJET_COO_SMALL_STRAIGHT_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"
#include "../constant.hpp"

namespace game::figures {
    class small_straight : public game::figures::figure {
        int _start_val;
        static const int POINTS_SUCCESS = 40;
    public:
        small_straight();
        small_straight(const figures::small_straight & ss);

        /* Accept only a straight of 4 dices (eg. 1-2-3-4 or 3-4-5-6).
         * _points is set to POINTS_SUCCESS if parsing is successful
         * _start_val is set to the first dice value of the straight
         */
        void parse(game::roll::dice* dices[NB_DICE]) override;
    };
}


#endif //PROJET_COO_SMALL_STRAIGHT_HPP
