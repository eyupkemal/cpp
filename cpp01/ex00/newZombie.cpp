#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *Z = new Zombie[1];
    Z->setName(name);
    delete[] Z;
    return(Z);
}
