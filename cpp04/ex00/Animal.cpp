#include "Animal.hpp"

Animal::Animal(){
   std::cout <<"Animal Default constructor" << std::endl;
}

Animal::~Animal(){
   std::cout <<"Animal Default destructer" << std::endl;
}
Animal::Animal(std::string _type){
    std::cout <<"Animal string constructor" << std::endl;
    set_type(_type);
}
std::string Animal::getType()const {
    return(this->type);
}
void Animal::set_type(std::string _type){
    this->type = _type;
}

Animal::Animal(const Animal &copy){
    *this = copy;
}

Animal& Animal::operator=(const Animal &a){
    this->set_type(a.getType());
    return *this;;
}

void Animal::makeSound() const{
    std::cout<< "ANİMAL SOUND "<< std::endl;
}