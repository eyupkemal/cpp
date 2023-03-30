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
    //comparison operators
    bool operator>(const Fixed&) const;
    bool operator<(const Fixed&) const;
    bool operator>=(const Fixed&) const;
    bool operator<=(const Fixed&) const;
    bool operator==(const Fixed&) const;
    bool operator!=(const Fixed&) const;
    //aritmetic operators
    Fixed operator+(const Fixed&)const;
    Fixed operator-(const Fixed&)const;
    Fixed operator/(const Fixed&)const;
    Fixed operator*(const Fixed&)const;
    //min max
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
    Fixed operator++(int);
    Fixed operator--(int);
    Fixed &operator++(void);
    Fixed &operator--(void);
	Fixed& operator=(const Fixed&);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const ;
	float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &copy);
