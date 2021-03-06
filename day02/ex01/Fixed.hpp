#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	int					fixedPoint;
	static const int	bits = 8;

public:

	Fixed(void);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed(void);
	Fixed(const Fixed &copy);
	Fixed & operator=(const Fixed &fixed);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream &out, const Fixed &fixed);

#endif