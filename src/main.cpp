//
// Created by Louis Leenart on 03/12/2021.
//
#include <iostream>
#include "../include/roll/dice.hpp"
#include "../include/roll/roll.hpp"
#include "../include/entity/player.hpp"
#include "../include/game_manager.hpp"
#include "../include/difficulty/easy.hpp"
#include "../include/difficulty/medium.hpp"
#include "../include/difficulty/impossible.hpp"
#include "difficulty/hard.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    //game::entity::player p("Louis");


    game::game_manager gm(game::difficulty::level_enum::MEDIUM, 2);

    while (gm.turn()) {

    }

    return EXIT_SUCCESS;
}