#include "easyfind.h"

int main()
{
    std::vector<int> arr;
    std::vector<int>::iterator it;

    for (int i = 0; i <= 10; i++) {
        arr.push_back(i);
    }

    it = easyfind(arr, 10);
    if (it != arr.end())
        std::cout << "Element " << *it << " exist in array" << std::endl;
    else
        std::cout << "Element does not exist in array" << std::endl;

}