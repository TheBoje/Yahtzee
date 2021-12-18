//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_FIGURE_HPP
#define PROJET_COO_FIGURE_HPP

#include "../roll/dice.hpp"
#include "../constant.hpp"
 
namespace game::figures {
    class figure {
    protected:
        int _points = 0;
    public:
        virtual ~figure() = default;

        /**
         * Implemented by each figure.
         * Go through the list of `game::roll::dice` `dices` to find
         * the specific figure (eq. square, full, etc.). If found, the
         * number of `_points` is set to either a provided constant,
         * the sum of all dices' values, or some other dev created
         * rule!
         * For now, every `parse()` is designed for a set of 5 dices
         * and follows the rules specified <a href="https://fr.wikipedia.org/wiki/Yahtzee#Yahtzee_Domaine_public">on wikipedia yahtzee article<a/>.
         * @param dices
         */
        virtual void parse(game::roll::dice* dices[NB_DICE]) = 0;

        /**
         *
         * @return number of points of the figure, within [0, n[.
         * 0 - the figure has not been parsed yet, or the parsing
         *     didn't find the associated pattern (eq. square,
         *     full, etc.).
         * n - the figure has been successfully parsed, and the
         *     figure is worth n points!
         */
        int get_points() const;
    };
}

#endif //PROJET_COO_FIGURE_HPP
