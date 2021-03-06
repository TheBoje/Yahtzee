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
        sup_part();
        sup_part(const sup_part<value> & sp);
        ~sup_part() override;

        void parse(game::roll::dice* dices[NB_DICE]) override;
    };

    template<int value>
    sup_part<value>::sup_part() : game::figures::figure("superior part : " + std::to_string(value))
    {}

    template<int value>
    void sup_part<value>::parse(game::roll::dice **dices) {
        for (int i = 0; i < game::NB_DICE; i++) {
            if (dices[i]->get_value() == value) {
                _points += value;
            }
        }
    }

    template<int value>
    sup_part<value>::sup_part(const sup_part<value> & sp)
    : game::figures::figure("superior part : " + std::to_string(value)) {
        _points = sp._points;
    }

    template<int value>
    sup_part<value>::~sup_part() {}
}

#endif //PROJET_COO_SUP_PART_HPP
