//
// Created by Louis Leenart on 03/12/2021.
//
#include <iostream>
#include "../include/roll/dice.hpp"
#include "../include/entity/player.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    game::entity::player p("Louis");

    game::roll::dice dice;
    std::cout << dice;

    p.turn();

    return EXIT_SUCCESS;
}