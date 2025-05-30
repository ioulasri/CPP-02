#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaABC = (b.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (b.getY() - a.getY());
	Fixed areaPAB = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (point.getX() - a.getX()) * (b.getY() - a.getY());
	Fixed areaPBC = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (point.getX() - b.getX()) * (c.getY() - b.getY());
	Fixed areaPCA = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (point.getX() - c.getX()) * (a.getY() - c.getY());

	return (areaABC > 0 && areaPAB > 0 && areaPBC > 0 && areaPCA > 0) ||
		   (areaABC < 0 && areaPAB < 0 && areaPBC < 0 && areaPCA < 0);
}
