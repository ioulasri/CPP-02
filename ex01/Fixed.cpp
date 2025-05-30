#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _rawBits(other._rawBits)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		_rawBits = other._rawBits;
	return *this;
}

Fixed::Fixed(const int value) : _rawBits(value << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _rawBits((roundf(value * (1 << _fractionalBits))))
{
	std::cout << "Float constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}