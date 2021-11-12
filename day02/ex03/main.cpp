#include "Point.hpp"

# define TESTS 7

int	main()
{
	const Point		a(0, 0);
	const Point		b(10, 30);
	const Point		c(20, 0);

	Point			*points = new Point[TESTS];

	points[0] = Point(10, 15);
	points[1] = Point(30, 15);
	points[2] = Point(0, 0);
	points[3] = Point(10, 30);
	points[4] = Point(20, 0);
	points[5] = Point(15, 2);
	points[6] = Point(25, 29);


	for (int i = 0; i < TESTS; ++i) {
		std::cout << "init (" << points[i].getX() << ", " << points[i].getY() << ")" << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < TESTS; ++i) {
		std::cout << "point (" << points[i].getX() << ", " << points[i].getY() << ") ";
		std::cout << "is inside? -> " << bsp(a, b, c, points[i]) << std::endl;
	}

	delete [] points;
}