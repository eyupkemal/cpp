#include "Dog.hpp"

Dog::Dog(){
   std::cout <<"Dog Default constructor" << std::endl;
   set_type("Dog");
}

Dog::~Dog(){
   std::cout <<"Dog Default desturctor" << std::endl;
}

Dog::Dog(const Dog &copy){
    *this = copy;
}

Dog& Dog::operator=(const Dog &a){
    this->type = a.type;
    return *this;;
}


void Dog::makeSound()const {
    std::cout<< this->getType() << ":  hav hav" << std::endl;
}
