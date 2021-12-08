//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_PLAYER_HPP
#define PROJET_COO_PLAYER_HPP

#include <string>
#include <vector>

#include "figure.hpp"

namespace yahtzee::entity {
    class player {
    private:
        std::string _name;
        std::vector<yahtzee::figures::figure> _figures;
    public:
        player(std::string name);
        int get_score();
        virtual void turn();
    };
}

#endif //PROJET_COO_PLAYER_HPP
