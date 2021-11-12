#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <cstdlib>

class	Conversion
{
	std::string	str;
	double		num;
	int			flagZero;

public:

	Conversion(char* string);
	~Conversion() {}
	Conversion(const Conversion &copy);
	Conversion & operator=(const Conversion &other);

	int		checkStr();

	void	toChar();
	void	toInt();
	void	toFloat();
	void	toDouble();
};

#endif