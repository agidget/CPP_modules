#include "Conversion.hpp"

int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		Conversion	myNumber(argv[1]);

		myNumber.toChar();
		myNumber.toInt();
		myNumber.toFloat();
		myNumber.toDouble();
	}
	else
		std::cout << "Please, put only 1 argument" << std::endl;
}