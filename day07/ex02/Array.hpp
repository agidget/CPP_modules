#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class	Array
{
	unsigned int	arrSize;
	T*				arr;

public:

	Array()
	{
		arrSize = 0;
		arr = nullptr;
	}
	Array(unsigned int n) : arrSize(n)
	{
		if (arrSize)
			arr = new T[arrSize];
		else
			arr = nullptr;
	}
	~Array()
	{
		delete[] arr;
	}
	Array(const Array &copy)
	{
		this->arrSize = copy.arrSize;
		if (this->arrSize)
		{
			this->arr = new T[arrSize];
			for (unsigned int i = 0; i < arrSize; i++)
				this->arr[i] = copy.arr[i];
		}
		else
			this->arr = nullptr;
	}
	Array & operator=(const Array &other)
	{
		delete[] this->arr;

		this->arrSize = other.arrSize;
		if (this->arrSize)
		{
			this->arr = new T[arrSize];
			for (unsigned int i = 0; i < arrSize; i++)
				this->arr[i] = other.arr[i];
		}
		else
			this->arr = nullptr;

		return (*this);
	}
	T& operator[](unsigned int index) throw(std::exception)
	{
		try
		{
			if (index >= this->arrSize)
				throw std::exception();
		}
		catch (std::exception &e)
		{
			std::cerr << "\033[0;31mThis element is out of limits" << std::endl;
			std::cerr << "Your index was changed to 0\033[0m" << std::endl;
			index = 0;
		}
		return (arr[index]);
	}
	unsigned int	size()
	{
		return (this->arrSize);
	}
};

#endif