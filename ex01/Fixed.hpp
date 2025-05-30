#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int                 _rawBits;
	static const int    _fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	~Fixed();
	Fixed &operator=(const Fixed &other);
	Fixed(int value);
	Fixed(float value);
	friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
		os << fixed.toFloat();
		return os;
	}

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

#endif // FIXED_HPP