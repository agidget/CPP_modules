#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T* arr, unsigned int len, void (*f)(T const &))
{
	for (unsigned int i = 0; i < len; i++)
		(*f)(arr[i]);
}

#endif