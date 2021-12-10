//
// Created by altimor on 10/12/2021.
//

#ifndef PROJET_COO_MOCK_DICE_H
#define PROJET_COO_MOCK_DICE_H


#include "gmock/gmock.h"
#include "../../include/roll/dice.hpp"
#include "dice_mock.hpp"

class mock_dice : public game::roll::dice_mock {
public:
    MOCK_METHOD(void, roll, (), (override));
    MOCK_METHOD(int, get_value, (), (const, override));
};


#endif //PROJET_COO_MOCK_DICE_H
