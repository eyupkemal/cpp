#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << " FragTrap default constructor" << std::endl;
    this->setEp(100);
    this->setAD(30);
    this->setHp(100);
	this->setName("FragTrap");
}

FragTrap::FragTrap(const FragTrap &copy){
    std::cout <<" FragTrap default copy constructor called:"<< std::endl;
    *this = copy;
}

FragTrap::FragTrap(std::string name) {
    std::cout << " FragTrap assingment constructor called" << std::endl;
    this->setName(name);
    this->setEp(100);
    this->setAD(30);
    this->setHp(100);
}

FragTrap::~FragTrap(){
    std::cout <<" FragTrap default destructor called:"<< std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &c){
    std::cout << " FragTrap copy assingment operator called" << std::endl;
    this->setAD(c.getAD());
    this->setName(c.getName());
    this->setEp(c.getEp());
    this->setHp(c.getHp());

    return *this;
}

void FragTrap::highFivesGuys(void){
    std::cout << this->getName() << " make a crib" <<std::endl;
}

std::ostream&   operator<<(std::ostream& o, FragTrap& c) {
	o << " Name: " << c.getName() << " HP: " << c.getHp() << " Stamina: " << c.getEp() << " AD: " << c.getAD();
    return o;
}