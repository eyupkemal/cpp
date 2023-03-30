#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap();
    FragTrap(std::string);
    ~FragTrap();
    FragTrap(const FragTrap &copy);
    FragTrap& operator=(const FragTrap &c);
    void highFivesGuys(void);
};

std::ostream&   operator<<(std::ostream& o, FragTrap& c);