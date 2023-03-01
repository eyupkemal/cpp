#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <ostream>

class ClapTrap
{
    private:
        std::string Name;
        int         HtPoint;
        int         EnP;
        int         AtD;
    public:
        ClapTrap();
        ClapTrap(std::string);
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap& operator=(const ClapTrap &nbr);
};