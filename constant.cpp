#include <iostream>
using std::cout;
using std::endl;

#define X 10 //macros

int main()
{
    const int x = 5;
    const int b = 4;

    enum { y = 100}; //enum 

    cout << b << endl;
    cout << X << endl;
    cout << y << endl;
    return 0;
}