#include "Fixed.hpp"

Fixed::Fixed(void)
{
	fixedPoint = 0;
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
	fixedPoint = fixed.getRawBits();

	return *this;
}

int	Fixed::getRawBits(void) const
{
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

Fixed::Fixed(const int num)
{
	fixedPoint = (int)(num << bits);
}

Fixed::Fixed(const float num)
{
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

bool Fixed::operator==(const Fixed &fixed)
{
	return (this->fixedPoint == fixed.fixedPoint);
}

bool Fixed::operator!=(const Fixed &fixed)
{
	return (this->fixedPoint != fixed.fixedPoint);
}

bool Fixed::operator>(const Fixed &fixed)
{
	return (this->fixedPoint > fixed.fixedPoint);
}

bool Fixed::operator<(const Fixed &fixed)
{
	return (this->fixedPoint < fixed.fixedPoint);
}

bool Fixed::operator>=(const Fixed &fixed)
{
	return (this->fixedPoint >= fixed.fixedPoint);
}

bool Fixed::operator<=(const Fixed &fixed)
{
	return (this->fixedPoint <= fixed.fixedPoint);
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	Fixed	tmp;

	tmp.fixedPoint = this->fixedPoint + fixed.fixedPoint;
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	Fixed	tmp;

	tmp.fixedPoint = this->fixedPoint - fixed.fixedPoint;
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	Fixed	tmp;

	tmp.fixedPoint = (this->fixedPoint * fixed.fixedPoint) >> bits;
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	Fixed	tmp;

	if (fixed.fixedPoint)
		tmp.fixedPoint = (this->fixedPoint / fixed.fixedPoint) << bits;
	else
	{
		std::cout << "Not possible to divide by 0" << std::endl;
		return (Fixed(0));
	}
	return (tmp);
}

Fixed & Fixed::operator++(void)
{
	fixedPoint++;
	return *this;
}

Fixed Fixed::operator++(int value)
{
	Fixed	tmp(*this);

	fixedPoint++;
	value = 0;
	return (tmp);
}

Fixed & Fixed::operator--(void)
{
	fixedPoint--;
	return *this;
}

Fixed Fixed::operator--(int value)
{
	Fixed	tmp(*this);

	fixedPoint--;
	value = 0;
	return (tmp);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}