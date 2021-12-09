//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_SMALL_STRAIGHT_HPP
#define PROJET_COO_SMALL_STRAIGHT_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"

namespace game::figures {
    class small_straight : public game::figures::figure {
        int _start_val;
    public:
        void parse(game::roll::dice dices[]) override;
    };
}


#endif //PROJET_COO_SMALL_STRAIGHT_HPP
