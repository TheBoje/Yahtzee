//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_ROLL_HPP
#define PROJET_COO_ROLL_HPP

#include <iostream>

#include "dice.hpp"
#include "constant.hpp"

namespace game::roll {
    class roll {
        dice _dices[NB_DICE];
        bool _kept[NB_DICE];

    public:
        roll();

        /**
         * Roll all the non-kept dices
         */
        void update();

        /**
         * Reset the kept array by setting all the values to false
         */
        void reset();
    };
}

#endif //PROJET_COO_ROLL_HPP
