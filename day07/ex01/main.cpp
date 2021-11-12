#include "iter.hpp"

class	Awesome
{
	int	_n;

public:

	Awesome(void): _n(42) {}
	int	get(void) const {return _n;}
};

std::ostream & operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return o;
}

template <typename T>
void	print(T x)
{
	std::cout << x << std::endl;
}

int main()
{
	int		arr[] = {0, 1, 2, 3, 4};
	Awesome	arr2[5];

	iter(arr, 5, print);
	std::cout << "--------------\n";
	iter(arr2, 5, print);
}
