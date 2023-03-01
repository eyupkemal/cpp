#include "zombie.hpp"

std::string Zombie::getName(){return(this->name);}

void Zombie::setName(std::string tname){this->name = tname;}

void Zombie::announce( void ){
    std::cout<< Zombie::getName() << ": brainz" <<std::endl;
}
