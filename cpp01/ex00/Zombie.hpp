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
private:
    std::string name;

public:
    void announce( void );
    std::string getName(void);
    void setName(std::string);
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif