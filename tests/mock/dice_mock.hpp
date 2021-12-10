//
// Created by altimor on 10/12/2021.
//

#ifndef PROJET_COO_DICE_MOCK_HPP
#define PROJET_COO_DICE_MOCK_HPP

#include <iostream>

namespace game::roll {
    class dice_mock {
        int _value;

    public:

        virtual ~dice_mock() {}

        /**
         * Roll the dice by calling a random number between 1 and 6
         * and store the result in _value
         */
        virtual void roll() = 0;

        virtual int get_value() const = 0;
    };
}

#endif //PROJET_COO_DICE_MOCK_HPP
