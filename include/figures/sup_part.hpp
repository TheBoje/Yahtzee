//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_SUP_PART_HPP
#define PROJET_COO_SUP_PART_HPP

#include "../roll/dice.hpp"
#include "figure.hpp"
#include "constant.hpp"

namespace game::figures {
    template<int value>
    class sup_part : public game::figures::figure {
    public:
        sup_part<>();
        void parse(game::roll::dice dices[]) override;
    };

    template<int value>
    sup_part<value>::sup_part() = default;

    template<int value>
    void sup_part<value>::parse(game::roll::dice dices[]) {
        for (int i = 0; i < game::NB_DICE; i++) {
            if (dices[i].get_value() == value) {
                _points += value;
            }
        }
    }
}

#endif //PROJET_COO_SUP_PART_HPP
