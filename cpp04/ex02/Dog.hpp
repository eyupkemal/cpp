#pragma once 

#include <iostream>
#include <string>
#include <ostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
    Brain *brain;
    public:
    Dog();
    Dog(std::string);
    ~Dog();
    Dog& operator=(const Dog &a);
    Dog(const Dog &copy);
    void makeSound()const;
};
