#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
   std::cout <<"WrongAnimal Default constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(){
   std::cout <<"WrongAnimal Default destructer" << std::endl;
}
WrongAnimal::WrongAnimal(std::string _type){
    std::cout <<"WrongAnimal string constructor" << std::endl;
    set_type(_type);
}
std::string WrongAnimal::getType()const {
    return(this->type);
}
void WrongAnimal::set_type(std::string _type){
    this->type = _type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &a){
    this->set_type(a.getType());
    return *this;;
}

std::ostream&   operator<<(std::ostream& o, WrongAnimal& c) {
    o<<" Name: ";
    return o;
}

void WrongAnimal::makeSound() const{
    std::cout<< "Wrong animal sound"<< std::endl;
}