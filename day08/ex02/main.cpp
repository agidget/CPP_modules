#include "mutantstack.hpp"

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "----------------\n";
	std::cout << "List is here:" << std::endl;
	{
		std::list<int>	myList;

		myList.push_back(5);
		myList.push_front(15);
		for (int i = 0; i < 20; i += 3)
			myList.push_back(i);
		
		for (std::list<int>::iterator it = myList.begin(); it != myList.end(); it++)
			std::cout << *it << std::endl;
	}
	std::cout << "----------------\n";
	std::cout << "MutantStack is here again:" << std::endl;
	{
		MutantStack<int> myStack;

		myStack.push(15);
		myStack.push(5);
		for (int i = 0; i < 20; i += 3)
			myStack.push(i);
		
		for (MutantStack<int>::iterator it = myStack.begin(); it != myStack.end(); it++)
			std::cout << *it << std::endl;
	}
}