//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_SUP_PART_HPP
#define PROJET_COO_SUP_PART_HPP

#include "../roll/dice.hpp"
#include "figure.hpp"

namespace yahtzee::figures {
    template<int value>
    class sup_part : public yahtzee::figures::figure {
    public:
        sup_part<>();
        void parse(yahtzee::roll::dice dices[]) override;
    };

    template<int value>
    sup_part<value>::sup_part() = default;

    template<int value>
    void sup_part<value>::parse(yahtzee::roll::dice *dices) {
        // TODO(Louis): This
    }
}

#endif //PROJET_COO_SUP_PART_HPP
