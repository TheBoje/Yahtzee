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

    // TODO instead of passing it as arg -> enum for difficulty and gm create it so you can destroy it in gm destructor
    game::difficulty::level *hard = new game::difficulty::hard; // TODO Destroy me in gm destructor
    game::difficulty::level *easy = new game::difficulty::easy;
    game::difficulty::level *medium = new game::difficulty::medium;
    game::difficulty::level *impossible = new game::difficulty::impossible;
    game::game_manager gm(impossible, 2);

    while (gm.turn()) {

    }

    return EXIT_SUCCESS;
}