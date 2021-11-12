#include "span.hpp"

int main()
{
	{
		try
		{
			Span sp = Span(1);

			sp.addNumber(5);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;

		}
		catch (std::exception &e)
		{
			std::cerr << "\033[0;31mError\033[0m" << std::endl;
		}
	}
	{
		try
		{
			Span sp = Span(4);

			sp.addNumber(5);
			sp.addNumber(1);
			sp.addNumber(17);
			sp.addNumber(4);
			sp.addNumber(11);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;

		}
		catch (std::exception &e)
		{
			std::cerr << "\033[0;31mError\033[0m" << std::endl;
		}
	}
	{
		try
		{
			std::vector<int>	newV(15000);
			for (int i = 0; i < 15000; i++)
				newV[i] = 2 * i;

			Span sp = Span(15000);
			sp.addNumber(newV);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;

		}
		catch (std::exception &e)
		{
			std::cerr << "\033[0;31mError\033[0m" << std::endl;
		}
	}	
}