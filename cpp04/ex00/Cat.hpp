#pragma once 

#include <iostream>
#include <string>
#include <ostream>
#include "Animal.hpp"

class Cat : public Animal{
    public:
    Cat();
    Cat(const std::string);
    ~Cat();
    Cat& operator=(const Cat &a);
    Cat(const Cat &copy);
    void makeSound()const ;
};

std::ostream& operator<<(std::ostream& o, Animal& c);