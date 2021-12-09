//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_CHANCE_HPP
#define PROJET_COO_CHANCE_HPP

#include "figure.hpp"
#include "../roll/dice.hpp"

namespace game::figures {
    class chance : public game::figures::figure {
    public:
        chance();
        ~chance();
        void parse(game::roll::dice dices[]) override;
    };
}

#endif //PROJET_COO_CHANCE_HPP
