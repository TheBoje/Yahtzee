//
// Created by Louis Leenart on 08/12/2021.
//

#include "../../include/roll/roll.hpp"

game::roll::roll::roll()
{
    for(int i = 0; i < NB_DICE; i++)
    {
        _dices[i] = new dice(i);
    }
}

game::roll::roll::~roll()
{
    for(int i = 0; i < NB_DICE; i++)
    {
        delete _dices[i];
    }
}

game::roll::roll::roll(const roll &src)
{
    for(int i = 0; i < NB_DICE; i++)
    {
        _dices[i] = new dice(*(src._dices[i]));
    }
}

game::roll::roll &game::roll::roll::operator=(const roll &src)
{
    if(&src != this)
    {
        for(int i = 0; i < NB_DICE; i++)
        {
            delete _dices[i];
            _dices[i] = new dice(*(src._dices[i]));
        }
    }

    return *this;
}

void game::roll::roll::update() {
    for(int i = 0; i < NB_DICE; i++)
    {
        if(!_dices[i]->get_is_kept())
        {
            _dices[i]->roll();
        }
    }
}

void game::roll::roll::reset() {
    for(int i = 0; i < NB_DICE; i++)
    {
        _dices[i]->roll();
    }
}

// TODO : voir s'il n'y a pas un meilleur moyen d'afficher sans parcourir le tableau 2 fois
std::ostream &game::roll::operator<<(std::ostream &os, const roll& r)
{
    std::vector<std::vector<std::string>> dices_printer;
    dices_printer.reserve(NB_DICE);

    // We need to get each lines of the dice in order two print all the dices in a row
    for(int i = 0; i < NB_DICE; i++)
        dices_printer.push_back(r._dices[i]->get_print_vector());



    for(int i = 0; i < dices_printer.size(); i++)
    {
        for(int j = 0; j < dices_printer[i].size(); j++)
        {
            // We invert i and j because we want to print all the first dice line in the same line
            os << dices_printer[j][i] << " ";
        }
        os << std::endl;
    }
}

game::roll::dice *game::roll::roll::get_dices() {
    return *_dices;
}
