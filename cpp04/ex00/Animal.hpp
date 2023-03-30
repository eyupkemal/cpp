#pragma once 

#include <iostream>

class Animal{
    protected:
    std::string type;
    public:
    Animal();
    Animal(const std::string);
    ~Animal();
    Animal& operator=(const Animal& a);
    Animal(const Animal& copy);
    std::string getType()const ;
    virtual void makeSound()const;
    void set_type(std::string);
};
