//
// Created by altimor on 08/12/2021.
//

#ifndef PROJET_COO_CONSTANT_HPP
#define PROJET_COO_CONSTANT_HPP

#include <iostream>

namespace yahtzee {
    constexpr int NB_DICE = 5;

    const std::string DICE_TOP =                    "┌───────┐";
    const std::string DICE_TWO_IN_ROW =             "│ ■   ■ │";
    const std::string DICE_ONE_IN_ROW_CENTERED =    "│   ■   │";
    const std::string DICE_ONE_IN_ROW_LEFT =        "│ ■     │";
    const std::string DICE_ONE_IN_ROW_RIGHT =       "│     ■ │";
    const std::string DICE_BLANK =                  "│       │";
    const std::string DICE_BOTTOM =                 "└───────┘";
}

#endif //PROJET_COO_CONSTANT_HPP
