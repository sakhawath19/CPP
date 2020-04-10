#include <iostream>
#include <array>
#include <vector>

using std::cout;

int main()
{
    //int data[] = {1, 2, 3, 4};
    std::array<int, 6> data = {1, 2, 3, 4, 5, 6}; 

    for(int n : data)
    {
        cout << n << "\t";
    }
    cout << std::endl;
}