#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	for (int i = 0; i < 3; i++)
        std::cout << numbers[i] << " " << mirror[i] << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	for (int i = 0; i < 3; i++)
		std::cout << numbers[i] << " " << mirror[i] << std::endl;
	std::cout << std::endl;

	Array<int> numbers2(3);

	numbers2 = numbers;
    
	for (int i = 0; i < 3; i++)
		std::cout << numbers2[i] << " " << mirror[i] << std::endl;
	std::cout << std::endl;
    delete [] mirror;//
    return 0;
}