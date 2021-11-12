#include "Karen.hpp"

int main()
{
	Karen   lol;

	lol.complain("DEBUG");
    std::cout << std::endl;
    lol.complain("INFO");
    std::cout << std::endl;
    lol.complain("WARNING");
    std::cout << std::endl;
    lol.complain("ERROR");
    std::cout << std::endl;
    lol.complain("lol");
    std::cout << std::endl;
}