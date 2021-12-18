//
// Created by Louis Leenart on 09/12/2021.
//

#include "../include/game_manager.hpp"

game::game_manager::game_manager(game::difficulty::level *level, int player_count) :
        _level(level),
        _roll(),
        turn_count(0) {
    _players.reserve(player_count);
    for (int i = 0; i < player_count; i++) {
        std::cout << "Enter the name of player number " << i << " : ";
        std::string name;
        getline( std::cin, name );
        game::entity::player p(name);
        _players.push_back(p);
    }
}


// Return true if the game is finished
bool game::game_manager::turn() {
    // The game is finished
    if (turn_count >= NB_TURNS) {

        for(game::entity::player& p : _players)
        {
            // TODO redéfinir l'opérateur << pour le player ?
            std::cout << "player " << p.get_score() << std::endl;
        }

        return false;
    }

    _level->turn(_roll, _players);

    turn_count++;
    return true;
}
