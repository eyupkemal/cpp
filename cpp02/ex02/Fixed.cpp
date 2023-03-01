#include "Fixed.hpp"

Fixed::Fixed() {
	this->setRawBits(0);
}

Fixed::Fixed(const int raw) {
	this->setRawBits(raw << this->fractional);
}

Fixed::Fixed(const float raw) {
	this->setRawBits(std::roundf(raw * (1 << this->fractional)));
}

Fixed::Fixed(Fixed const &copy) {
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& nbr){
	if(this != &nbr)
		raw_bits = nbr.getRawBits();
	return(*this);
}

std::ostream& operator<<(std::ostream &out, const Fixed &copy) {
	out << (copy.getRawBits() / pow(2, 8));
	return out;
}

Fixed::~Fixed() {

}

int Fixed::getRawBits(void) const {
	return raw_bits;
}

void	Fixed::setRawBits(int const raw) {
	this->raw_bits = raw;
}

int		Fixed::toInt(void) const {
	int temp = this->getRawBits() / (1 << this->fractional);
	return temp;
}

float	Fixed::toFloat(void) const {
	float	temp = (float)this->getRawBits() / (1 << this->fractional);
	return temp;
}

//ex02

bool Fixed::operator>(const Fixed& n) const{
    return(this->raw_bits > n.getRawBits());
}
bool Fixed::operator<(const Fixed& n) const{
    return(this->raw_bits < n.getRawBits());
}
bool Fixed::operator>=(const Fixed& n) const{
    return(this->raw_bits >= n.getRawBits());
}
bool Fixed::operator<=(const Fixed& n) const{
    return(this->raw_bits <= n.getRawBits());
}
bool Fixed::operator==(const Fixed& n) const{
    return(this->raw_bits == n.getRawBits());
}
bool Fixed::operator!=(const Fixed& n) const{
    return(this->raw_bits != n.getRawBits());
}

Fixed Fixed::operator*(const Fixed& n)const{
    return(Fixed(this->toFloat() * n.toFloat()));
}
Fixed Fixed::operator+(const Fixed& n)const{
    return(Fixed(this->toFloat() + n.toFloat()));
}
Fixed Fixed::operator-(const Fixed& n)const{
    return(Fixed(this->toFloat() - n.toFloat()));
}
Fixed Fixed::operator/(const Fixed& n)const{
    return(Fixed(this->toFloat() / n.toFloat()));
}
//min max
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return(a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return(a.getRawBits() > b.getRawBits()) ? a : b;
}
//++ --
Fixed &Fixed::operator++(void)
{
	this->raw_bits++;
	return(*this);
}
Fixed Fixed::operator++(int)
{
	Fixed a(this->toFloat());
	this->raw_bits++;
	return(a);
}

Fixed &Fixed::operator--(void)
{
	this->raw_bits--;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed a(this->toFloat());
	this->raw_bits--;
	return(a);
}