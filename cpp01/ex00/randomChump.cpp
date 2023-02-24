#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie *Z = new Zombie[1];
    Z->setName(name);
    Z->announce();
}