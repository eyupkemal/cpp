#include "Fixed.hpp"

Fixed::Fixed(){
    this->_raw = 0;
    std::cout << "default constructer called" << std::endl;
};
Fixed::Fixed(const Fixed& old_raw){ this->_raw = old_raw.getRawBits();
    std::cout << "copy constructer called" << std::endl;
};

int Fixed::getRawBits()const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBits(int const new_raw)
{
    std::cout << "setRawBits operator called" << std::endl;
    this->_raw =new_raw;
}

Fixed& Fixed::operator=(const Fixed& num){
    std::cout << "copy assignment operator called" << std::endl;
    this->_raw = num.getRawBits();
    return *this;
}

Fixed::~Fixed(){std::cout << "deconstructer called" << std::endl;}