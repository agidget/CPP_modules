#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# define RED(str) "\033[1;31m" str "\033[0m"

class	Karen
{
	typedef void (Karen::*fptr)(void);

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:

	Karen(void);
	~Karen(void);

	fptr	debugPtr;
	fptr	infoPtr;
	fptr	warningPtr;
	fptr	errorPtr;

	int		returnIndex(std::string level);
	void	complain(std::string level);
};

#endif