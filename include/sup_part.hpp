//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_SUP_PART_HPP
#define PROJET_COO_SUP_PART_HPP

#include "dice.hpp"
#include "figure.hpp"

namespace yahtzee::figures {
    template<int value>
    class sup_part : public yahtzee::figures::figure {
    public:
        sup_part<>();
        void parse(yahtzee::dice dices[]) override;
        int operator+ (const figure & f);
    };

    template<int value>
    sup_part<value>::sup_part() = default;

    template<int value>
    void sup_part<value>::parse(yahtzee::dice *dices) {
        // TODO(Louis): This
    }

    template<int value>
    int sup_part<value>::operator+(const figure & f) {
        return _points + f.get_points();
    }


}

#endif //PROJET_COO_SUP_PART_HPP
