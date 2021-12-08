cmake_minimum_required(VERSION 3.21)
project(Projet_COO)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(src)

add_executable(main
        include/ai.hpp
        include/chance.hpp
        include/constant.hpp
        include/dice.hpp
        include/easy.hpp
        include/figure.hpp
        include/game_manager.hpp
        include/hard.hpp
        include/huge_straight.hpp
        include/impossible.hpp
        include/inf_part.hpp
        include/level.hpp
        include/medium.hpp
        include/player.hpp
        include/roll.hpp
        include/small_straight.hpp
        include/square.hpp
        include/sup_part.hpp
        include/toak.hpp
        include/yahtzee.hpp
        src/dice.cpp
        src/main.cpp)

enable_testing()

add_executable(tests
        src/dice.cpp
        tests/dice_tests.cpp
        src/main_tests.cpp)
target_link_libraries(tests gtest_main)
add_test(NAME tests COMMAND tests)

