#pragma once 

#include <iostream>
#include <string>
#include <ostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
    Brain *i;
public:
    Cat();
    Cat(const std::string);
    ~Cat();
    Cat& operator=(const Cat &a);
    Cat(const Cat &copy);
    void makeSound()const ;
};
