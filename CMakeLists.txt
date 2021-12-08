cmake_minimum_required(VERSION 3.21)
project(Projet_COO)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(Projet_COO
        src/main.cpp
        include/dice.hpp
        include/roll.hpp
        include/game_manager.hpp
        include/level.hpp
        include/player.hpp
        include/AI.hpp
        include/figure.hpp
        include/sup_part.hpp
        include/inf_part.hpp
        include/small_straight.hpp
        include/huge_straight.hpp
        include/yathzee.hpp
        include/toak.hpp
        include/square.hpp
        include/chance.hpp include/constant.hpp)