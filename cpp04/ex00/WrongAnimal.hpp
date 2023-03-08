#pragma once 

#include <iostream>

class WrongAnimal{
    protected:
    std::string type;
    public:
    WrongAnimal();
    WrongAnimal(const std::string);
    ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& a);
    WrongAnimal(const WrongAnimal& copy);
    std::string getType()const ;
    void makeSound()const;
    void set_type(std::string);
};
