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
    for(int i = 0; i < NB_DICE; i++)
    {
        if(!r._dices[i]->get_is_kept())
        {
            os << *(r._dices[i]) << std::endl;
        }
    }

    os << "-------------" << std::endl;

    for(int i = 0; i < NB_DICE; i++)
    {
        if(r._dices[i]->get_is_kept())
        {
            os << *(r._dices[i]) << std::endl;
        }
    }
}
