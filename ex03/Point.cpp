#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point::~Point() {}

Point &Point::operator=(const Point &other)
{
	if (this != &other)
	{
		// x and y are const, so we cannot assign them
		// but we can return a reference to this object
	}
	return *this;
}

Fixed Point::getX() const {
	return x;
}

Fixed Point::getY() const {
	return y;
}

bool Point::operator==(const Point &other) const {
	return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point &other) const {
	return !(*this == other);
}

bool Point::operator<(const Point &other) const {
	if (x < other.x) return true;
	if (x > other.x) return false;
	return y < other.y;
}

bool Point::operator>(const Point &other) const {
	if (x > other.x) return true;
	if (x < other.x) return false;
	return y > other.y;
}

bool Point::operator<=(const Point &other) const {
	return (*this < other || *this == other);
}

bool Point::operator>=(const Point &other) const {
	return (*this > other || *this == other);
}

std::ostream& operator<<(std::ostream &os, const Point &point) {
	os << "Point(" << point.getX() << ", " << point.getY() << ")";
	return os;
}
