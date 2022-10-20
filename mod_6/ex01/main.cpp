#include <iostream>

typedef struct s_Data {
    int data;
}Data;

uintptr_t  serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t ptr)
{
    return reinterpret_cast<Data *>(ptr);
}

int main()
{
    Data *ser = new(Data);
    Data *tmp;
    uintptr_t ptr;


    ser->data = 42;

    ptr = serialize(ser);

    tmp = deserialize(ptr);

    std::cout << "serialize->data = " << ser->data << std::endl;
    std::cout << "tmp->data = " << tmp->data << std::endl;
    ser->data = 666;
    std::cout << "serialize->data = " << ser->data << std::endl;
    std::cout << "tmp->data = " << tmp->data << std::endl;

    delete ser;
    return 0;
}