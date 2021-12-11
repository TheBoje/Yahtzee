//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_PLAYER_HPP
#define PROJET_COO_PLAYER_HPP

#include <string>
#include <vector>

#include "../figures/figure.hpp"

namespace game::entity {
    class player {
    private:
        std::string _name;
        std::vector<game::figures::figure *> _figures;
    public:
        player(std::string name);
        player(const player & p);
        ~player();
        player& operator=(const player & p);
        int get_score();
        virtual void turn();
    };
}

#endif //PROJET_COO_PLAYER_HPP
