//
// Created by vince on 08/12/2021.
//

#ifndef PROJET_COO_PLAYER_HPP
#define PROJET_COO_PLAYER_HPP

#include <string>
#include <vector>

#include "../roll/roll.hpp"
#include "../figures/figure.hpp"

namespace game::entity {
    class player {
    private:
        std::string _name;
        std::vector<game::figures::figure *> _figures;

        void parse_dices_to_keep(std::string& dices_to_keep, std::vector<int>& to_keep) const;
    public:
        player(std::string& name);
        player(const player & p);
        ~player();

        void add_figure(int index, roll::roll& roll) const;

        player& operator=(const player & p);
        int get_score() const;
        virtual void turn(roll::roll& roll) const;
    };
}

#endif //PROJET_COO_PLAYER_HPP
