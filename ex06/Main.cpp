#include "Harl.hpp"


int main(int ac, char **av)
{
	if(ac < 2)
	{
		std::cout << "argument count is not enough" << std::endl;
		return (0);
	}
	Harl harlDolphin;
	harlDolphin.complain(av[1]);
}