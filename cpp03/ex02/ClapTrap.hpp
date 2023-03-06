#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <ostream>

class ClapTrap
{
    protected:
        std::string Name;
        int         HtPoint;
        int         EnP;
        int         AtD;
    public:
        ClapTrap();
        ClapTrap(std::string);
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        std::string getName(void)const;
        int getHp()const;
        int getEp()const;
        int getAD()const;
        void setName(std::string);
        void setEp(int);
        void setAD(int);
        void setHp(int);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap& operator=(const ClapTrap &nbr);
};
std::ostream& operator<<(std::ostream& o, ClapTrap& c);