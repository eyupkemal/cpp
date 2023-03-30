#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>
# include <cctype>
# include <cstring>
# include <stdlib.h>
# include <string>
#include <iomanip>
#include <limits>

class Zombie{
    std::string name;
public:
    void announce( void );
    std::string getName(void);
    void setName(std::string);
    Zombie();
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif