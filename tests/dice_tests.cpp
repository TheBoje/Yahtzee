//
// Created by Louis Leenart on 08/12/2021.
//

#include "gtest/gtest.h"
#include "../include/dice.hpp"

class dice_tests : public ::testing::Test {
protected:
    dice_tests() = default;

    void SetUp() override {
        //std::cout << "Setting up stuff..." << std::endl;;
    }

    void TearDown() override { }

    yahtzee::dice _d;
};

TEST_F(dice_tests, get_value) {
    ASSERT_EQ(1, _d.get_value()); //TODO(Louis): this is not working on purpose
}

TEST_F(dice_tests, not_get_value) {
    ASSERT_NE(1, _d.get_value());
}