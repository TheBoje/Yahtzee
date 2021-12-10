//
// Created by Louis Leenart on 08/12/2021.
//

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../../include/roll/dice.hpp"

class test_dice : public ::testing::Test {
protected:
    game::roll::dice _d;
};

TEST_F(test_dice, get_value) {
    ASSERT_EQ(0, _d.get_value());
}

TEST_F(test_dice, not_get_value) {
    ASSERT_NE(1, _d.get_value());
}