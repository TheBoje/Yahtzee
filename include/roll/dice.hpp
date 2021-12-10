//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_DICE_HPP
#define PROJET_COO_DICE_HPP

#include <iostream>

namespace game::roll {
    class dice {
        int _value;

    public:

        dice();

        /**
         * Roll the dice by calling a random number between 1 and 6
         * and store the result in _value
         */
        void roll();

        int get_value() const;

        friend std::ostream& operator<<(std::ostream& os, const dice& d);

        /**
         * @return the sum of the dices value
         */
        int operator+(const dice& d) const;

        int operator+(int val) const;
    };
}

#endif //PROJET_COO_DICE_HPP
