# include <iostream>
# include <ctime>

class	Base
{
public:
	virtual ~Base() {};
};

class	A: public Base {};
class	B: public Base {};
class	C: public Base {};

Base*	generate(void)
{
	int		num;
	Base*	ptr;

	srand(time(NULL));
	num = rand() % 3;
	switch (num)
	{
		case 0:
			ptr = new A();
			break ;
		case 1:
			ptr = new B();
			break ;
		case 2:
			ptr = new C();
			break;
		default:
			ptr = NULL;
			break ;
	}
	return (ptr);
}

void	identify(Base* p)
{
	A*	aPtr = dynamic_cast<A*>(p);
	B*	bPtr = dynamic_cast<B*>(p);
	C*	cPtr = dynamic_cast<C*>(p);

	if (aPtr)
		std::cout << "It's A Pointer" << std::endl;
	else if (bPtr)
		std::cout << "It's B Pointer" << std::endl;
	else if (cPtr)
		std::cout << "It's C Pointer" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& aRef = dynamic_cast<A&>(p);
		(void)aRef;
		std::cout << "It's A Reference" << std::endl;
	}
	catch (std::bad_cast & e) {}
	try
	{
		B& bRef = dynamic_cast<B&>(p);
		(void)bRef;
		std::cout << "It's B Reference" << std::endl;
	}
	catch (std::bad_cast & e) {}
	try
	{
		C& cRef = dynamic_cast<C&>(p);
		(void)cRef;
		std::cout << "It's C Reference" << std::endl;
	}
	catch (std::bad_cast & e) {}
}

int	main()
{
	Base*	ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);

	delete ptr;
}
