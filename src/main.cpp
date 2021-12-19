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

int get_player_count() {
    int num_players;

    do {
        std::cout << "How many players will play ? " << std::endl;
        std::cin >> num_players;
    } while (num_players < 2);
}

game::difficulty::level_enum get_difficulty() {
    int diff;


    do {
        std::cout << "Choose difficulty : " << std::endl;
        std::cout << "0 - Easy" << std::endl;
        std::cout << "1 - Medium" << std::endl;
        std::cout << "2 - Hard" << std::endl;
        std::cout << "3 - Impossible" << std::endl;

        std::cin >> diff;
    }while(diff < 0 || diff > 3);

    return static_cast<game::difficulty::level_enum>(diff);
}

int main() {

    int player_count = get_player_count();
    game::difficulty::level_enum lvl = get_difficulty();

    game::game_manager gm(lvl, player_count);

    while (gm.turn()) {

    }

    return EXIT_SUCCESS;
}