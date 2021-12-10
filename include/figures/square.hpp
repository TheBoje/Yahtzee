//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_SQUARE_HPP
#define PROJET_COO_SQUARE_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"

namespace game::figures {
    class square : public game::figures::figure {
        int _value;
    public:
        square();
        square(const figures::square & s);
        ~square();
        void parse(game::roll::dice dices[]) override;
    };
}

#endif //PROJET_COO_SQUARE_HPP
