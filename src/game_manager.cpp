//
// Created by Louis Leenart on 09/12/2021.
//

#include "../include/game_manager.hpp"
#include "../include/difficulty/easy.hpp"
#include "../include/difficulty/medium.hpp"
#include "../include/difficulty/hard.hpp"
#include "../include/difficulty/impossible.hpp"

game::game_manager::game_manager(const game::difficulty::level_enum& level, int player_count) :
        _roll(),
        turn_count(0) {

    switch (level) {
        case game::difficulty::level_enum::EASY :
            _level = new game::difficulty::easy;
            break;

        case game::difficulty::level_enum::MEDIUM :
            _level = new game::difficulty::medium;
            break;

        case game::difficulty::level_enum::HARD :
            _level = new game::difficulty::hard;
            break;

        case game::difficulty::level_enum::IMPOSSIBLE :
            _level = new game::difficulty::impossible;
            break;
    }

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
            std::cout << "player " << p.get_score() << std::endl;
        }

        return false;
    }

    _level->turn(_roll, _players);

    turn_count++;
    return true;
}

game::game_manager::~game_manager() {
    delete _level;
}

game::game_manager::game_manager(const game::game_manager &gm) {
    _level = gm._level;
}

game::game_manager &game::game_manager::operator=(const game::game_manager &gm) {
    if(this != &gm)
    {
        _level = gm._level;
    }
    return *this;
}
