#pragma once 

#include <iostream>
#include <string>
#include <ostream>
#include "Animal.hpp"

class Dog : public Animal{
    protected:
    std::string type;
    public:
    Dog();
    Dog(std::string);
    ~Dog();
    Dog& operator=(const Dog &a);
    Dog(const Dog &copy);
    void makeSound()const;
};

std::ostream& operator<<(std::ostream& o, Animal& c);