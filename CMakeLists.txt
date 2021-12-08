cmake_minimum_required(VERSION 3.21)
project(Projet_COO)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

add_executable(Projet_COO
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
        include/yathzee.hpp
        src/main.cpp)
