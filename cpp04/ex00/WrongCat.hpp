#pragma once 

#include <iostream>
#include <string>
#include <ostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public:
    WrongCat();
    WrongCat(const std::string);
    ~WrongCat();
    WrongCat& operator=(const WrongCat &a);
    WrongCat(const WrongCat &copy);
    void makeSound()const ;
};

