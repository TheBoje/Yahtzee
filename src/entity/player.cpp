//
// Created by Louis Leenart on 09/12/2021.
//

#include "../../include/entity/player.hpp"
#include "../../include/figures/sup_part.hpp"
#include "../../include/figures/toak.hpp"
#include "../../include/figures/small_straight.hpp"
#include "../../include/figures/huge_straight.hpp"
#include "../../include/figures/full.hpp"
#include "../../include/figures/square.hpp"
#include "../../include/figures/yahtzee.hpp"
#include "../../include/figures/chance.hpp"

#include "constant.hpp"

game::entity::player::player(std::string& name) : _name(name) {
    // Fill _figures with empty figures!
    _figures.reserve(13);
    _figures.push_back(new figures::sup_part<1>());
    _figures.push_back(new figures::sup_part<2>());
    _figures.push_back(new figures::sup_part<3>());
    _figures.push_back(new figures::sup_part<4>());
    _figures.push_back(new figures::sup_part<5>());
    _figures.push_back(new figures::sup_part<6>());
    _figures.push_back(new figures::toak());
    _figures.push_back(new figures::small_straight());
    _figures.push_back(new figures::huge_straight());
    _figures.push_back(new figures::full());
    _figures.push_back(new figures::square());
    _figures.push_back(new figures::yahtzee());
    _figures.push_back(new figures::chance());
}

int game::entity::player::get_score() const {
    int sum = 0;
    int sup_part_sum = 0;

    for (int i = 0; i < 6; i++) {
        sup_part_sum += _figures.at(i)->get_points();
    }

    for (int i = 6; i < (int)_figures.size(); i++) {
        sum += _figures.at(i)->get_points();
    }

    sum += sup_part_sum;

    if (sup_part_sum >= BONUS_REQUIRED) {
        sum += BONUS_VALUE;
    }

    return sum;
}

void game::entity::player::turn(roll::roll& roll) const {

    // TODO : vérifier qu'on est bien dans les clous pour le choix des dès à garder

    std::cout << _name << "' turn : " << std::endl;

//    std::cin.ignore(256, '\n');
    for(int i = 0; i < NB_REROLL_MAX; i++)
    {
        roll.update();
        std::cout << roll;
        std::cout << "Which dice do you want to keep ?" << std::endl;


        std::string dices_to_keep;
        std::getline(std::cin, dices_to_keep);
        std::cout << dices_to_keep << std::endl;

        size_t pos = 0;
        std::string token;

        std::vector<int> to_keep;
        // TODO: stoi quand input = "0 2 " plante (espace a la fin)
        if(dices_to_keep.size() != 0)
        {
            while((pos = dices_to_keep.find(' ')) != std::string::npos)
            {
                token = dices_to_keep.substr(0, pos);
                to_keep.push_back(stoi(token));
                dices_to_keep.erase(0, pos + 1);
            }

            token = dices_to_keep.substr(0, pos);
            to_keep.push_back(stoi(token));
            dices_to_keep.erase(0, pos + 1);
        }



        roll.keep_dices(to_keep);
    }
    std::cout << roll;
}

game::entity::player::player(const game::entity::player &p) {
    _figures.reserve(13);
    // I don't like how ugly this is :(
    _figures.push_back(new figures::sup_part<1>(*(figures::sup_part<1> *)p._figures.at(0)));
    _figures.push_back(new figures::sup_part<2>(*(figures::sup_part<2> *) p._figures.at(1)));
    _figures.push_back(new figures::sup_part<3>(*(figures::sup_part<3> *) p._figures.at(2)));
    _figures.push_back(new figures::sup_part<4>(*(figures::sup_part<4> *) p._figures.at(3)));
    _figures.push_back(new figures::sup_part<5>(*(figures::sup_part<5> *) p._figures.at(4)));
    _figures.push_back(new figures::sup_part<6>(*(figures::sup_part<6> *) p._figures.at(5)));
    _figures.push_back(new figures::toak(*(figures::toak *) p._figures.at(6)));
    _figures.push_back(new figures::small_straight(*(figures::small_straight *) p._figures.at(7)));
    _figures.push_back(new figures::huge_straight(*(figures::huge_straight *) p._figures.at(8)));
    _figures.push_back(new figures::full(*(figures::full *) p._figures.at(9)));
    _figures.push_back(new figures::square(*(figures::square *) p._figures.at(10)));
    _figures.push_back(new figures::yahtzee(*(figures::yahtzee *) p._figures.at(11)));
    _figures.push_back(new figures::chance(*(figures::chance *) p._figures.at(12)));
}

game::entity::player::~player() {
    for (const figures::figure * f : _figures) {
        delete f;
    }
}

game::entity::player &game::entity::player::operator=(const game::entity::player &p) {
    if (this == &p) {
        return *this;
    }

    for (figures::figure * f : _figures) {
        delete f;
    }

    _figures.push_back(new figures::sup_part<1>(*(figures::sup_part<1> *)p._figures.at(0)));
    _figures.push_back(new figures::sup_part<2>(*(figures::sup_part<2> *) p._figures.at(1)));
    _figures.push_back(new figures::sup_part<3>(*(figures::sup_part<3> *) p._figures.at(2)));
    _figures.push_back(new figures::sup_part<4>(*(figures::sup_part<4> *) p._figures.at(3)));
    _figures.push_back(new figures::sup_part<5>(*(figures::sup_part<5> *) p._figures.at(4)));
    _figures.push_back(new figures::sup_part<6>(*(figures::sup_part<6> *) p._figures.at(5)));
    _figures.push_back(new figures::toak(*(figures::toak *) p._figures.at(6)));
    _figures.push_back(new figures::small_straight(*(figures::small_straight *) p._figures.at(7)));
    _figures.push_back(new figures::huge_straight(*(figures::huge_straight *) p._figures.at(8)));
    _figures.push_back(new figures::full(*(figures::full *) p._figures.at(9)));
    _figures.push_back(new figures::square(*(figures::square *) p._figures.at(10)));
    _figures.push_back(new figures::yahtzee(*(figures::yahtzee *) p._figures.at(11)));
    _figures.push_back(new figures::chance(*(figures::chance *) p._figures.at(12)));
    return *this;
}

void game::entity::player::add_figure(int index, roll::roll& roll) const {
    if(index >= 0 && index < _figures.size())
        _figures[index]->parse(roll.get_dices());
}
