#pragma once 

#include <iostream>

class Animal{
    protected:
    std::string type;
    public:
    Animal();
    Animal(const std::string);
    Animal(const Animal& copy);
    virtual ~Animal();
    
    Animal& operator=(const Animal& a);
    std::string getType()const ;
    virtual void makeSound()const;
    void set_type(std::string);
};
