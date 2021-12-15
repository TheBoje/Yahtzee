//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_DICE_HPP
#define PROJET_COO_DICE_HPP

#include <iostream>
#include <random>
#include <vector>

namespace game::roll {
    class dice {
        int _value;
        bool _is_kept;
    public:

        dice();
        dice(int rand_offset);
        dice(const dice& src);

        /**
         * Roll the dice by calling a random number between 1 and 6
         * and store the result in _value
         */
        void roll();

        int get_value() const;
        bool get_is_kept() const;

        void keep();

        std::vector<std::string> get_print_vector();

        /**
         * @return the sum of the dices value
         */
        int operator+(const dice& d) const;

        int operator+(int val) const;

        bool operator<(const dice & d) const;
    };

    std::ostream& operator<<(std::ostream& os, const dice& d);
}

#endif //PROJET_COO_DICE_HPP
