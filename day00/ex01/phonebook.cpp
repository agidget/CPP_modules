#include "phonebook.hpp"

void    printStr(std::string str)
{
	if (str.length() < 10)
	{
		std::cout << str;
		std::cout << std::setw(11 - str.length());
	}
	else if (str.length() == 10)
		std::cout << str;
	else
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	std::cout << "|";
}

void	eofError(void)
{
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
}

void	Contact::fillInfo(void)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "\033[0;94mPlease, enter a contact's First Name\033[0m" << std::endl;
	std::cin >> first_name;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "\033[0;94mPlease, enter contact's Last Name\033[0m" << std::endl;
	std::cin >> last_name;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "\033[0;94mPlease, enter contact's Nickname\033[0m" << std::endl;
	std::cin >> nickname;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "\033[0;94mPlease, enter contact's Phone Number\033[0m" << std::endl;
	std::cin >> phone_number;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "\033[0;94mPlease, enter contact's darkest secret\033[0m" << std::endl;
	std::cin >> darkest_secret;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	Phonebook::addContact(int *i)
{
	if (*i == 7)
		*i = 0;
	else
		(*i)++;
	person[*i].fillInfo();
}

void	Contact::printMainInfo(void)
{
	printStr(first_name);
	printStr(last_name);
	printStr(nickname);
}

void	Contact::printAllInfo(void)
{
	std::cout << "\033[0;36mFirst Name: \033[0m" << first_name << std::endl;
	std::cout << "\033[0;36mLast Name: \033[0m" << last_name << std::endl;
	std::cout << "\033[0;36mNickname: \033[0m" << nickname << std::endl;
	std::cout << "\033[0;36mPhone Number: \033[0m" << phone_number << std::endl;
	std::cout << "\033[0;36mDarkest Secret: \033[0m" << darkest_secret << std::endl;
}

bool	Contact::ifContactExist(void)
{
	if (first_name.empty())
		return (false);
	return (true);
}

int		Phonebook::printAllContacts(void)
{
	int	num;

	std::cout << "\033[0m";
	printStr("Index");
	printStr("First Name");
	printStr("Last Name");
	printStr("Nickname");
	std::cout << std::endl;
	for (num = 0; num < 8 && person[num].ifContactExist(); num++)
	{
		std::cout << num + 1 << std::setw(10) << "|";
		person[num].printMainInfo();
		std::cout << std::endl;
	}
	return (num);
}

void	ifManyMistakes(int *check_if_mistake)
{
	if (*check_if_mistake > 4)
	{
		std::cout << "\033[1;31mThis PhoneBook is too hard for you to handle, go home" << std::endl;
		exit(EXIT_SUCCESS);
	}
	std::cout << "\033[0;31mUnavailable, please, try again\033[0m" << std::endl;
	(*check_if_mistake)++;
}

void	Phonebook::printRequestedContact(int num)
{
	int	index;
	int	check_if_mistake;

	check_if_mistake = 0;
	index = -1;
	while (num && (index < 1 || index > num))
	{
		std::cout << "\033[0;92mPlease, choose available index from 1 to " << num << std::endl;
		std::cin >> index;
		eofError();
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			ifManyMistakes(&check_if_mistake);
		}
		else if (index < 1 || index > num)
		{
			ifManyMistakes(&check_if_mistake);
			continue ;
		}
		else if (index >= 1 && index <= num)
		{
			std::cout << "\033[0m";
			person[index - 1].printAllInfo();
			break ;
		}
	}
}

int main()
{
	std::string input;
	Phonebook	book;
	int         i;
	int			num;

	i = -1;
	while (true)
	{
		std::cout << "\033[4;33mPlease, choose a command:\033[0m" << std::endl;
		std::cout << "\033[1;33mEXIT, ADD or SEARCH\033[1;35m" << std::endl;
		std::cin >> input;
		eofError();
		if (input.compare("EXIT") == 0)
			exit(EXIT_SUCCESS);
		else if (input.compare("ADD") == 0)
			book.addContact(&i);
		else if (input.compare("SEARCH") == 0)
		{
			num = book.printAllContacts();
			book.printRequestedContact(num);
		}
		else
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}