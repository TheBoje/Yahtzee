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
        dice* _dices[NB_DICE];

    public:
        roll();
        roll(const roll& src);
        ~roll();

        roll& operator=(const roll& src);

        /**
         * Roll all the non-kept dices
         */
        void update();

        /**
         * Reset the kept array by setting all the values to false
         */
        void reset() const;

        game::roll::dice * get_dices();

        void keep_dices(std::vector<int> to_keep);

        friend std::ostream& operator<<(std::ostream& os, const roll& r);

    };
}

#endif //PROJET_COO_ROLL_HPP
