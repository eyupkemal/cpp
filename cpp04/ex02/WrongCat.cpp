#include "WrongCat.hpp"

WrongCat::WrongCat(){
   std::cout <<"WrongCat Default constructor" << std::endl;
   set_type("WrongCat");
}

WrongCat::~WrongCat(){
   std::cout <<"WrongCat Default desturctor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &a){
    this->type = a.type;
    return *this;;
}


void WrongCat::makeSound()const {
    std::cout<< this->getType() << ": Wrong cat sound" << std::endl;
}
