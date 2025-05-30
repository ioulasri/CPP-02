#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &other);
	~Point();

	Point &operator=(const Point &other);

	Fixed getX() const;
	Fixed getY() const;

	bool operator==(const Point &other) const;
	bool operator!=(const Point &other) const;
	bool operator<(const Point &other) const;
	bool operator>(const Point &other) const;
	bool operator<=(const Point &other) const;
	bool operator>=(const Point &other) const;

};

std::ostream& operator<<(std::ostream &os, const Point &point);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif // POINT_HPP