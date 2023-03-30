#include "Cat.hpp"

Cat::Cat(){
   std::cout <<"Cat Default constructor" << std::endl;
   set_type("cat");
}

Cat::~Cat(){
   std::cout <<"Cat Default desturctor" << std::endl;
}

Cat::Cat(const Cat &copy){
    *this = copy;
}

Cat& Cat::operator=(const Cat &a){
    this->type = a.type;
    return *this;;
}


void Cat::makeSound()const {
    std::cout<< this->getType() << ":  miyavvvvvv miyavvv" << std::endl;
}
