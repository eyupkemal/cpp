#include "ClapTrap.hpp"

std::string ClapTrap::getName()const{return(this->Name);}
int ClapTrap::getHp()const{return(this->HtPoint);}
int ClapTrap::getEp()const {return(this->EnP);}
int ClapTrap::getAD()const{return(this->AtD);}

void ClapTrap::setEp(int ep){this->EnP = ep;}
void ClapTrap::setName(std::string name){this->Name = name;}
void ClapTrap::setHp(int hp){this->HtPoint = hp;}
void ClapTrap::setAD(int ad){this->AtD = ad;}

ClapTrap::ClapTrap(std::string _Name) : Name(_Name) ,HtPoint(10) ,EnP(10), AtD(0){
   std::cout << " ClapTrap string constructer Called" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << " ClapTrapDestructer Called" << std::endl;
}

ClapTrap::ClapTrap(){
    std::cout << " ClapTrap Default constructer called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "ClapTrap Copy constructer called" << std::endl;
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
    std::cout<< "Claptrap "<< this->Name << " attack"  "(" << this->getHp() << ") attacks " << target << ", causing " << this->AtD << " points of damage!" << std::endl;
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
    std::cout << " ClapTrap " << this->Name << "(" << this->HtPoint << ") takes " << amount << " points of damage!!" << std::endl;
    this->HtPoint -= amount;
    this->EnP--;
}

std::ostream&   operator<<(std::ostream& o, ClapTrap& c) {
	o << " Name: " << c.getName() << " HP: " << c.getHp() << " Stamina: " << c.getEp() << " AD: " << c.getAD();
    return o;
}