# include "Conversion.hpp"

Conversion::Conversion(char* string)
{
	str = static_cast<std::string>(string);
	num = atof(string);
	flagZero = 0;
	if (num == 0 && !(str == "0" || str == "0.0f" || str == "+0"
		|| str == "0.0" || str == "-0"))
		flagZero = 1;
}

Conversion::Conversion(const Conversion &copy)
{
	*this = copy;
}

Conversion & Conversion::operator=(const Conversion &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

int	Conversion::checkStr()
{
	if (str == "inf" || str == "-inf" || str == "+inf"
		|| str == "inff" || str == "-inff" || str == "+inff"
		|| str == "nan" || str == "nanf")
		return (1);
	return (0);
}

void	Conversion::toChar()
{
	std::cout << "char: ";
	if (str.length() == 1 && !(str[0] >= '0' && str[0] <= '9'))
		std::cout << "'" << str << "'" << std::endl;
	else if (flagZero || num > 127 || num < -128 || checkStr())
		std::cout << "impossible" << std::endl;
	else if (num < 32 || num > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
}

void	Conversion::toInt()
{
	std::cout << "int: ";
	if (flagZero || num > INT_MAX || num < INT_MIN || checkStr())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
}

void	Conversion::toFloat()
{
	std::cout << "float: ";
	if (flagZero)
		std::cout << "impossible" << std::endl;
	else
	{
		if (num == static_cast<int>(num))
			std::cout << static_cast<float>(num) << ".0f" << std::endl;
		else
			std::cout << static_cast<float>(num) << "f" << std::endl;
	}
}

void	Conversion::toDouble()
{
	std::cout << "double: ";
	if (flagZero)
		std::cout << "impossible" << std::endl;
	else
	{
		if (num == static_cast<int>(num))
			std::cout << num << ".0" << std::endl;
		else
			std::cout << num << std::endl;
	}
}