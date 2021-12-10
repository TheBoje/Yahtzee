//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_TOAK_HPP
#define PROJET_COO_TOAK_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"

namespace game::figures {
    class toak : public game::figures::figure {
        int _value1;
        int _value2;    
    public:
        toak();
        toak(const figures::toak & t);
        ~toak();
        void parse(game::roll::dice dices[]) override;
    };
}


#endif //PROJET_COO_TOAK_HPP
