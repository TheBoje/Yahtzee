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

        bool add_figure(int index, roll::roll& roll) const;

        /*
         * Those methods are here to help the computation for the different levels
         * (especially the medium level that needs the fill the sup part before the inf part)
         */
        bool is_sup_part_done() const;
        bool is_sup_inf_done() const;

        player& operator=(const player & p);
        void print_available_figures() const;
        int get_score() const;
        virtual void turn(roll::roll& roll) const;

        friend std::ostream& operator<<(std::ostream& os, const player& p);
    };

}

#endif //PROJET_COO_PLAYER_HPP
