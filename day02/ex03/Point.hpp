#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	const Fixed	x;
	const Fixed	y;

public:

	Point(void);
	Point(const float a, const float b);
	~Point(void);
	Point(const Point &copy);
	Point & operator=(const Point &point);

	float	getX(void);
	float	getY(void);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif