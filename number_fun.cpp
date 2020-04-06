#include <iostream>
#include <cmath>

using std::cout;

int main()
{
    cout << sqrt(25) << std::endl;
    cout << sqrt(-25) << std::endl;

    cout << pow(9, 999) << std::endl;
    cout << pow(-9, 999) << std::endl;

    cout << NAN << std::endl;
    cout << INFINITY << std::endl;
    cout << -INFINITY << std::endl;

    cout << remainder(10, 3) << std::endl;
    cout << fmax(2, 3) << std::endl;
    cout << fmin(2, 3) << std::endl;
    
    cout << trunc(-1.5) << std::endl;
    cout << floor(-1.5) << std::endl;
    cout << ceil(-1.5) << std::endl;
    cout << round(-1.5) << std::endl;
    
}