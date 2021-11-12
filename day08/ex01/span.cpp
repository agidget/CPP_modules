# include "span.hpp"

Span::Span(unsigned int N) : _size(N)
{}

Span::~Span()
{
	_v.clear();
}

Span::Span(const Span &copy)
{
	this->_size = copy._size;
	this->_v = copy._v;
}

Span & Span::operator=(const Span &other)
{
	this->_size = other._size;
	this->_v = other._v;

	return (*this);
}

void	Span::addNumber(int num)
{
	if (_v.size() < _size)
		_v.push_back(num);
	else
		throw std::exception();
}

void	Span::addNumber(std::vector<int> newV)
{
	if (_v.size() < _size)
	{
		unsigned int	posSize;

		posSize = _size - _v.size();
		if (posSize < newV.size())
			_v.insert(_v.end(), newV.begin(), newV.begin() + posSize);
		else
			_v.insert(_v.end(), newV.begin(), newV.end());
	}
	else
		throw std::exception();
}

int	Span::longestSpan()
{
	if (_size == 0 || _size == 1)
		throw std::exception();
	else
	{
		int	maxSpan;

		maxSpan = *(std::max_element(_v.begin(), _v.end()))
				- *(std::min_element(_v.begin(), _v.end()));
		return (maxSpan);
	}
}

int	Span::shortestSpan()
{
	if (_size == 0 || _size == 1)
		throw std::exception();
	else
	{
		int	minSpan;

		for (std::vector<int>::iterator it = _v.begin(); it + 1 != _v.end(); it++)
		{
			if (it == _v.begin())
				minSpan = abs(*(it + 1) - *it);
			for (std::vector<int>::iterator jt = it + 1; jt != _v.end(); jt++)
			{
				if (abs(*jt - *it) < minSpan)
					minSpan = abs(*jt - *it);
			}
		}
		return (minSpan);
	}
}