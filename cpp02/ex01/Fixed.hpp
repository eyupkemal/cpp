#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <ostream>


class Fixed{
private:
    int raw_bits;
    static const int fractional = 8;
public:
    Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(Fixed const &copy);
	~Fixed();
	Fixed& operator=(const Fixed&);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const ;
	float	toFloat(void) const;
};


std::ostream& operator<<(std::ostream &out, const Fixed &copy);