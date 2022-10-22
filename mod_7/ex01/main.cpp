#include "iter.h"
#include <iostream>


template<typename T>
void show_el(const T &val)
{
    std::cout << val << std::endl;
}

int main()
{
    int test_arr[6] = {1, 2, 3, 4, 5, 6};
    std::string str_arr[5] = {"one", "two", "three", "four", "five"};
    float f_arr[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

    ::iter(test_arr, 6, show_el);
    ::iter(str_arr, 5, show_el);
    ::iter(f_arr, 5, show_el);

    return 0;
}