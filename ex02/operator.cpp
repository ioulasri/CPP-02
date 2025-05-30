#include "Fixed.hpp"

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++_rawBits;
	return temp;
}

Fixed& Fixed::operator++()
{
	++_rawBits;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--_rawBits;
	return temp;
}

Fixed& Fixed::operator--()
{
	--_rawBits;
	return *this;
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result._rawBits = _rawBits + other._rawBits;
	return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result._rawBits = _rawBits - other._rawBits;
	return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result._rawBits = (_rawBits * other._rawBits) >> _fractionalBits;
	return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
	if (other._rawBits == 0)
	{
		std::cerr << "Error: Division by zero" << std::endl;
		return Fixed(0);
	}
	Fixed result;
	result._rawBits = (_rawBits << _fractionalBits) / other._rawBits;
	return result;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}