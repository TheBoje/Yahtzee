//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_DICE_HPP
#define PROJET_COO_DICE_HPP

#include <iostream>

namespace yahtzee {
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

        std::ostream& operator<<(std::ostream& os);

        /**
         * @return the sum of the dices value
         */
        int operator+(const dice& d);

        int operator+(int val);
    };
}

#endif //PROJET_COO_DICE_HPP
