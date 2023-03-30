#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "default constructer called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int raw) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(raw << this->fractional);
}

Fixed::Fixed(const float raw) {
	std::cout << "float consturcter called" << std::endl;
	this->setRawBits(std::roundf(raw * (1 << this->fractional)));
}

Fixed::Fixed(Fixed const &copy) {
	std::cout << "copy constructer called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& c) {
	std::cout << "copy assignment operator called" << std::endl;
	this->setRawBits(c.getRawBits());
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &copy) {
	out << (copy.getRawBits() / pow(2, 8));
	return out;
}

Fixed::~Fixed() {
	std::cout << "deconstructer called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return raw_bits;
}

void	Fixed::setRawBits(int const raw) {
	this->raw_bits = raw;
}

int		Fixed::toInt(void) const {
	/* int temp = this->getRawBits() / (1 << this->fractional);
	return temp; */
	return(getRawBits() >> fractional);
}

float	Fixed::toFloat(void) const {
	float	temp = this->getRawBits() / (1 << this->fractional);
	return temp;
}