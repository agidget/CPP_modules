#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator	easyFind(T arr, int n)
{
	typename T::iterator	it;

	it = std::find(arr.begin(), arr.end(), n);
	if (it == arr.end())
		throw std::exception();
	else
		std::cout << "\033[0;32mFound the occurence\033[0m" << std::endl;
	return (it);
}