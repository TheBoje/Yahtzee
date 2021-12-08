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
    private:
        int _value;
    public:
        sup_part<int>();
        void parse(yahtzee::dice dices[]) override;
    };
}

#endif //PROJET_COO_SUP_PART_HPP
