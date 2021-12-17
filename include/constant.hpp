//
// Created by altimor on 08/12/2021.
//

#ifndef PROJET_COO_CONSTANT_HPP
#define PROJET_COO_CONSTANT_HPP

#include <iostream>

namespace game {
    // NOTE: Change this value and MANY things will break.
    constexpr int NB_DICE = 5;
    constexpr int MAX_VALUE = 6;
    constexpr int MIN_VALUE = 1;
    constexpr int BONUS_REQUIRED = 63;
    constexpr int BONUS_VALUE = 63;
    constexpr int NB_REROLL_MAX = 3;

    const std::string DICE_TOP =                    "┌───────┐";
    const std::string DICE_TWO_IN_ROW =             "│ ■   ■ │";
    const std::string DICE_ONE_IN_ROW_CENTERED =    "│   ■   │";
    const std::string DICE_ONE_IN_ROW_LEFT =        "│ ■     │";
    const std::string DICE_ONE_IN_ROW_RIGHT =       "│     ■ │";
    const std::string DICE_BLANK =                  "│       │";
    const std::string DICE_BOTTOM =                 "└───────┘";
}

#endif //PROJET_COO_CONSTANT_HPP
