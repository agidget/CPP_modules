#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fixedPoint = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedPoint = copy.getRawBits();
	// *this = operator=(copy);
}

Fixed & Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	fixedPoint = fixed.getRawBits();

	return *this;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = (int)(num << bits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = (int)roundf(num * (1 << bits));
}

float	Fixed::toFloat(void) const
{
	float	res;

	res = (float)fixedPoint / (float)(1 << bits);
	return (res);
}

int	Fixed::toInt(void) const
{
	return (fixedPoint >> bits);
}

std::ostream & operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();

	return (out);
}