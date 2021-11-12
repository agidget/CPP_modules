#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <cmath>

class	Span
{
	unsigned int		_size;
	std::vector<int>	_v;

public:

	Span(unsigned int N = 0);
	~Span();
	Span(const Span &copy);
	Span & operator=(const Span &other);

	void	addNumber(int num);
	void	addNumber(std::vector<int> newV);
	int		longestSpan();
	int		shortestSpan();
};

#endif