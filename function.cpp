/*
Function can //call another //function 
One function can not be defined inside another function 
*/



/* Function forward decleration
Function have to be defined before main function otherwise
function can be declared before main function but can be defined later
    
#include <iostream>

// int add(int, int) // this is also valid decleration// but best practice to use 
// function parameters
int add(int x, int y); // forward declaration of add() (using a function prototype)
 
int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}
 
int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}

*/



/* Fixing the order of parameters
If the architecture evaluates left to right, 
a() will be called before b(). If the architecture evaluates right to left, 
b() will be called before a(). This may or may not be of consequence, depending on what a() and b() do.

If it is important that one argument evaluate first, 
you should explicitly define the order of execution, like so:


someFunction(a(), b());

int avar{ a() }; // a() will always be called first
int bvar{ b() }; // b() will always be called second
 
someFunction(avar, bvar); // it doesn't matter whether avar or bvar are copied first 
because they are just values
*/



/* order of the variable cration and destruction
int add(int x, int y)
{ 
    int z{ x + y };
 
    return z;
} // z, y, and x sequentially destroyed here // local variables are destroyed in opposite order of creation
*/



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
    return EXIT_SUCCESS; // EXIT_FAILURE
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