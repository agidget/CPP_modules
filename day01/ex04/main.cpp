#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>

void	errorMsg(std::string str)
{
	std::cout << str << std::endl;
	exit(EXIT_FAILURE);
}

void	generalError(void)
{
	std::cout << "Error: ";
	std::cout << strerror(errno) << std::endl;
	exit(EXIT_FAILURE);
}

void	checkArgs(int argc, char **argv)
{
	if (argc != 4)
		errorMsg("Wrong number of arguments, please, try again");
		
	std::string	s0 = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (s0.empty() || s1.empty() || s2.empty())
		errorMsg("String is empty, please, try again");
}

int	main(int argc, char **argv)
{
	std::string			new_file;
	std::ifstream		infile;
	std::ofstream		outfile;
	std::size_t			index;
	std::stringstream	buf;
	std::string			line;

	checkArgs(argc, argv);
	infile.open(argv[1], std::ios::in);
	if (!infile.good())
		generalError();
	if (infile.peek() == EOF)
		errorMsg("File is empty");
	buf << infile.rdbuf();
	line = buf.str();
	new_file = argv[1];
	new_file += ".replace";
	outfile.open(new_file);
	if (!outfile.good())
		generalError();
	index = 0;
	while ((index = line.find(argv[2], index)) != std::string::npos && strcmp(argv[2],argv[3]))
	{
		line.erase(index, strlen(argv[2]));
		line.insert(index, argv[3]);
	}
	outfile << line;
	infile.close();
	outfile.close();
}