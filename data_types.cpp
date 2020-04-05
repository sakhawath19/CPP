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

    
}


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