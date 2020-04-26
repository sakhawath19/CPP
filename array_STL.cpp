//standard template library
//std::array<int, 5>
//arrays send to function as reference
//vector send to function as a copy
//STL send copy and size
#include <iostream>
#include <vector>
#include <array>

using std::cout;
using std::cin;
using std::endl;

void print_array(std::array<int, 5> data)
{
    for(int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t";
    }
    cout << endl;
}

int main()
{
    std::array<int, 5> data = {1, 2, 3}; // defined size of the vector
    print_array(data);
}

