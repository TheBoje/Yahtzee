//
// Created by altimor on 10/12/2021.
//

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "../mock/mock_dice.hpp"
#include "../../include/figures/chance.hpp"

class test_player : public ::testing::Test {
    static const int NB_DICES = 5;

    mock_dice* _mockDices[NB_DICES];
    game::figures::chance _chance;

    void SetUp() override {
        for(int i = 0; i < NB_DICES; i++)
        {
            _mockDices[i] = new mock_dice();
        }
    }
};

