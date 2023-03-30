#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << " ScavTrap Default constructer called" << std::endl;
}
ScavTrap::~ScavTrap(){

    std::cout << " ScavTrap Default destructer called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << " ScavTrap Copy constructer called" << std::endl;
    *this = copy;
}

ScavTrap::ScavTrap(std::string name){
    std::cout << " ScavTrap Default constructer called" << std::endl;

    this->setName(name);
    this->setAD(20);
    this->setEp(50);
    this->setHp(100);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& n){
    this->setEp(n.getEp());
    this->setHp(n.getHp());
    this->setName(n.getName());
    this->setAD(n.getAD());

    return *this;
}

void ScavTrap::guardGate(){
    std::cout<< " ScavTrap is now in Gate keeper mode."<<std::endl;
}

void ScavTrap::attack(const std::string &target){
    if(this->getEp() >0 and this->getHp() >0){
            std::cout << " "<< this->getName() << " locked the " << target 
			<< " and given " << this->getAD() << " damage." << std::endl;
    }
}