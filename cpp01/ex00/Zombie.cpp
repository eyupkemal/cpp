#include "Zombie.hpp"

std::string Zombie::getName(){return(this->name);}
void Zombie::setName(std::string tname){this->name = tname;}

void Zombie::announce( void ){
    std::cout<< Zombie::getName() << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}
Zombie::Zombie(std::string _name)
{
	this->name = _name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}