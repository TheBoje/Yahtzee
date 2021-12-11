//
// Created by Louis Leenart on 09/12/2021.
//

#ifndef PROJET_COO_FULL_HPP
#define PROJET_COO_FULL_HPP

#include "figure.hpp"
#include "../constant.hpp"

namespace game::figures {
    class full : public game::figures::figure {
    private:
        int _value_pair{};
        int _value_toak{};
        static const int POINTS_SUCCESS = 25;
    public:
        full();
        full(const figures::full & f);
        void parse(game::roll::dice dices[NB_DICE]) override;
    };
}

#endif //PROJET_COO_FULL_HPP
