#include "Fixed.hpp"

float Fixed::toFloat(void) const
{
	return (float)(_rawBits) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return _rawBits >> _fractionalBits;
}