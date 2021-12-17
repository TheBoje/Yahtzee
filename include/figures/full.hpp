//
// Created by Louis Leenart on 09/12/2021.
//

#ifndef PROJET_COO_FULL_HPP
#define PROJET_COO_FULL_HPP

#include "figure.hpp"
#include "../constant.hpp"

namespace game::figures {
    class full : public game::figures::figure {
    private:
        int _value_pair;
        int _value_toak;
        static const int POINTS_SUCCESS = 25;
    public:
        full();
        full(const figures::full & f);

        /* Accept only a pair and three of a kind (aka toak).
         * Note: the pair can't be within the toak
         * _points is set to POINTS_SUCCESS if parsing is successful
         * _value_pair is set to the dice value of the pair
         * _value_toak is set tot the dice value of the toak
         */
        void parse(game::roll::dice* dices[NB_DICE]) override;
    };
}

#endif //PROJET_COO_FULL_HPP
