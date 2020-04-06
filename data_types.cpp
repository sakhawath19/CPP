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

    cout << FLT_DIG <<std::endl; //checking trustworthy digit number
    cout << LDBL_DIG <<std::endl; //checking trustworthy digit number
    cout << DBL_DIG <<std::endl; //checking trustworthy digit number
}



/*
#include <iostream>

using std::cout;

int main()
{
    //bool pizza_is_good = true;
    bool pizza_is_good = -1; //0 is false anything else is true
    cout << pizza_is_good <<std::endl;

    bool rice_is_bad  = 0;
    cout << std::boolalpha << rice_is_bad << std::endl;//printing false/true

}*/

/*
#include <iostream>

#include <string>

using std::cout;
using std::endl;

//example of escape sequence
int main()
{
    cout << "Hello\tThere" << endl;
    cout << "Hello\nThere" << endl;
    cout << "Hello\bThere" << endl; //delete character
    cout << "Hello\vThere" << endl;
    cout << "Hello\0" << endl; //end of string
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
    cout << SHRT_MAX << std::endl;
    cout << SHRT_MIN << std::endl;
    cout << INT_MAX << std::endl;
    cout << INT_MIN << std::endl;
    cout << ULLONG_MAX << std::endl;    
}*/