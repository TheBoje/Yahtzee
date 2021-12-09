//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_YAHTZEE_HPP
#define PROJET_COO_YAHTZEE_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"

namespace game::figures {
    class yahtzee : public game::figures::figure {
        int _value;
    public:
        void parse(game::roll::dice dices[]) override;
    };
}

#endif //PROJET_COO_YAHTZEE_HPP
