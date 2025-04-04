#include "Point.hpp"
#include "Fixed.hpp"

static Fixed calculateArea(const Point& p1, const Point& p2, const Point& p3)
{
	return Fixed(
		std::abs(
			(p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())) +
            (p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())) +
            (p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat()))
		) /2.0f
	);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) 
{
	Fixed totalArea = calculateArea(a, b, c);

	Fixed area1 = calculateArea(point, b, c);
	Fixed area2 = calculateArea(a, point, c);
	Fixed area3 = calculateArea(a, b, point);

	if (totalArea == (area1 + area2 + area3)) {
        if (area1 == 0 || area2 == 0 || area3 == 0) {
            return false;
        }
        return true;
    }
    return false;
}
