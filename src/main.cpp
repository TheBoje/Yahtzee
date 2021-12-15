//
// Created by Louis Leenart on 03/12/2021.
//
#include <iostream>
#include "../include/roll/dice.hpp"
#include "../include/roll/roll.hpp"
#include "../include/entity/player.hpp"
#include "../include/game_manager.hpp"
#include "../include/difficulty/easy.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    //game::entity::player p("Louis");

    game::difficulty::level *easy = new game::difficulty::easy;
    game::game_manager gm(easy, 2);

    gm.turn();
    return EXIT_SUCCESS;
}