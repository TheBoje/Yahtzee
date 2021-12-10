//
// Created by Louis Leenart on 03/12/2021.
//
#include <iostream>
#include "entity/player.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    game::entity::player p("Louis");
    p.turn();
    return EXIT_SUCCESS;
}