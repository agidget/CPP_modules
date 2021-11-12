#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class	MutantStack: public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator	iterator;

	MutantStack() {}
	~MutantStack() {}
	MutantStack(const MutantStack &copy) { *this = copy; }
	MutantStack & operator=(const MutantStack &other)
	{
		*this = other;
		return (*this);
	}

	iterator	begin()
	{
		return this->c.begin();
	};
	iterator	end()
	{
		return this->c.end();
	}

};

#endif