//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_TOAK_HPP
#define PROJET_COO_TOAK_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"
#include "../constant.hpp"

namespace game::figures {
    class toak : public game::figures::figure {
        int _value;
    public:
        toak();
        toak(const figures::toak & t);
        void parse(game::roll::dice dices[NB_DICE]) override;
    };
}


#endif //PROJET_COO_TOAK_HPP
