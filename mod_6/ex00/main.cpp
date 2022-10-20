#include "Convert.h"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			Convert value = Convert(av[1]);

			value.ToChar();
			value.ToInt();
			value.ToFloat();
			value.ToDouble();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
	{
		std::cout << "Usage: ./convert [numeric or character value]" << std::endl;
	}
	return 0;
}

