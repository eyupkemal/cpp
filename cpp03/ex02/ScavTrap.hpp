#pragma once

#include <iostream>
#include <ostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    private:
    bool Gate;
    public:
    ScavTrap();
    ScavTrap(std::string);
    ScavTrap(const ScavTrap &copy);
    ~ScavTrap();
    void guardGate();
    void attack(const std::string &target);
    ScavTrap& operator=(const ScavTrap& n);
};