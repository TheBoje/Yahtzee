//
// Created by Louis Leenart on 09/12/2021.
//

#ifndef PROJET_COO_FULL_HPP
#define PROJET_COO_FULL_HPP

#include "figure.hpp"

namespace game::figures {
    class full : public game::figures::figure {
    public:
        full();
        full(const figures::full & f);
        ~full();
        void parse(game::roll::dice dices[]) override;
    };
}

#endif //PROJET_COO_FULL_HPP
