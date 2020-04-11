#include <iostream>

namespace utilz
{
    void print_array(int data[], int size)
    {
        for(int i = 0; i < size; i++)
        {
            std::cout << data[i] << std::endl;
        }
    }
}

int main()
{
    int data[] = {1, 2, 3};

    utilz::print_array(data, 3);
}
