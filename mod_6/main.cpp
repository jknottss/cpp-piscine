#include "Convert.h"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			Convert tc = Convert(av[1]);

			tc.ToChar();
			tc.ToInt();
			tc.ToFloat();
			tc.ToDouble();
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

