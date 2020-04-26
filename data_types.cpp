// If you see something with a _t suffix, it’s probably a type. 
// But many types don’t have a _t suffix, so this isn’t consistently applied.

// Avoid using unsigned integer
// https://www.learncpp.com/cpp-tutorial/unsigned-integers-and-why-to-avoid-them/

// Fixed width integer // Guranteed to have same size on any architecture
// Example: std::int8_t
// Avoid using fixed width integer, as they may not be defined in all architectures
// std::int_least#_t integers when you need an integer guaranteed to be at least a certain minimum size.



// sizeof return a value of type std::size_t. std::size_t is defined an unsigned integral type, 
// and it is typically used to represent the size or length of objects.
#include <cstddef> // std::size_t
#include <iostream>
 
int main()
{
    // Compiled as a 32-bit (4 byte) console app on the author’s system, this prints: 4
	std::cout << sizeof(std::size_t) << '\n';
 
	return 0;
}




/* Checking how many digits are trustworthy for different data type
#include <iostream>
#include <float.h>
using std::cout;
// double would be preferable most of the cases
//to deal with money you need to use some other library which is more trustworthy

int main()
{
    float a = 10.3/3;
    a = a * 1000000000000;
    double b = 77000; //7.7E4;
    long double c;

    cout <<std::fixed << a << std::endl; // representation without exponent

    cout << FLT_DIG <<std::endl; //checking trustworthy digit number of float
    cout << LDBL_DIG <<std::endl; //checking trustworthy digit number
    cout << DBL_DIG <<std::endl; //checking trustworthy digit number of double
}*/





/* Boolean data type test
#include <iostream>

using std::cout;

int main()
{
    //bool pizza_is_good = true;
    bool pizza_is_good = -1;                            //0 is false anything else is true
    cout << pizza_is_good <<std::endl;

    bool rice_is_bad  = 0;
    cout << std::boolalpha << rice_is_bad << std::endl; //printing false/true using boolalpha

}*/





/* Eexample of escape sequence
#include <iostream>

#include <string>

using std::cout;
using std::endl;

int main()
{
    cout << "Hello\tThere" << endl;
    cout << "Hello\nThere" << endl;
    cout << "Hello\bThere" << endl;             //delete character
    cout << "Hello\vThere" << endl;
    cout << "Hello\0" << endl;                  //end of string
    cout << "Hello \"There\"" << endl;
    cout << "Hello \"There\" '" << endl;
    cout << "Hello\\" << endl;
}*/

/*
#include <iostream>
#include <climits>

using std::cout;
using std::cin;

int main()
{
    char x = 'A'; // single quote for char
    cout << x << std::endl;

    cout << (int) x << std::endl; //data casting

    char y = 127;
    cout << (int) y << std::endl; //data casting

    char z = 128; //it will overflow since 127 is the maximum number
    //then it will start counting with lowest negative number
    cout << (int) z << std::endl; //data casting

    unsigned char c = 129;
    cout << (int) c << std::endl; //data casting
    
}*/





/*
#include <iostream>
#include <climits>
//integer data types have 32 bits but
//it is not guaranteed that it will get that much space
//it depends on compiler or machine
//so be careful to use the data type

using std::cout;
using std::cin;

int main()
{
    short a;
    int b;
    long c;
    long long d;

    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout << sizeof(short) << std::endl;
    cout << SHRT_MAX << std::endl;          // Maximum size of short
    cout << SHRT_MIN << std::endl;
    cout << INT_MAX << std::endl;
    cout << INT_MIN << std::endl;           // Minimum size of integer
    cout << ULLONG_MAX << std::endl;    
}*/



// bool returns 1 as true
// boolalpha prints bools as true or false
/*
#include <iostream>
 
// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
    return (x == y);                                   // operator== returns true if x equals y, and false otherwise
}
 
int main()
{
    std::cout << "Enter an integer: ";
    int x{ 0 };
    std::cin >> x;
 
    std::cout << "Enter another integer: ";
    int y{ 0 };
    std::cin >> y;
 
    std::cout << std::boolalpha;                        // print bools as true or false
    
    std::cout << x << " and " << y << " are equal? ";
    std::cout << isEqual(x, y);                         // will return true or false
 
    return 0;
}
*/



// C++ supports 4 type of casting 1. Static Cast 2. Dynamic Cast 3. Const Cast 4. Reinterpret Cast
/*  Example of static cast, it is a compile time cast 
#include <iostream>
 
int main()
{
    std::cout << "Input a keyboard character: ";
 
    char ch{};
    std::cin >> ch;
    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';
 
    return 0;
}
*/