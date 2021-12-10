//
// Created by Louis Leenart on 08/12/2021.
//
#include <iostream>

#include "gtest/gtest.h"
#include "../cmake-build-debug/_deps/googletest-src/googlemock/include/gmock/gmock.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleMock(&argc, argv);
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}