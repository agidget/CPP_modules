#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "\033[4;34mAddress:\033[0m" << std::endl;
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "\033[4;34mString:\033[0m" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}