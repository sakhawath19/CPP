#include <iostream>

using std::cout;
using std::cin;

void print_pow(double base, int exponent)
{
    cout << "base is " << base <<std::endl;
    cout << "exponent is " << exponent <<std::endl;
}
int main()
{
    print_pow(2, 3);
}


/*
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power_cal(double, int);

int main()
{
    double power = pow(10, 3);
    cout << power <<std::endl;

    double myPower = power_cal(2, 3);
    
    cout << myPower <<std::endl;

    return 0;
}

double power_cal(double base, int exponent)
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}*/
/*
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    double square_val;

    square_val = pow(2, 2);

    return 0;
}*/