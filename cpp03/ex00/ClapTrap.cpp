#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _Name) : Name(_Name) ,HtPoint(10) ,EnP(10), AtD(0){
   
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructer Called" << std::endl;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default constructer called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "Copy constructer called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& n){

    this->EnP = n.EnP;
    this->AtD = n.AtD;
    this->Name = n.Name;
    this->HtPoint = n.HtPoint;
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (this->HtPoint <= 0 or this->EnP <= 0)
    {
        std::cout << this->Name << "'s energy point and hit point run out!!" << std::endl;
        return ;
    }
    std::cout<< "Claptrap "<< this->Name << " attack"  "(" << this->HtPoint << ") attacks " << target << ", causing " << this->AtD << " points of damage!" << std::endl;
    this->EnP--;

}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HtPoint <= 0 or this->EnP <= 0)
    {
        std::cout << this->Name << "'s energy point and hit point run out!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << "(" << this->HtPoint << ") is repaird " << amount << " HtPoint points!" << std::endl;
    this->HtPoint += amount;
    this->EnP--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(this->HtPoint <= 0 or this->HtPoint <= amount )
    {
        std::cout << this->Name << " is Dead :(" << std::endl;
        this->HtPoint = 0;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << "(" << this->HtPoint << ") takes " << amount << " points of damage!!" << std::endl;
    this->HtPoint -= amount;
    this->EnP--;      
}