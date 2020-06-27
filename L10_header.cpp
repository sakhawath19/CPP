/*
it’s worth keeping in mind that header files typically only contain function and variable declarations, 
not function and variable definitions  


When writing a source file, include the corresponding header (If one exists), 
even if you don’t need it yet. (best practice)
*/

#include <iostream>
// Insert contents of add.h at this point.  Note use of double quotes here.
// #include "add.h" 

 
int main()
{
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    return 0;
}

// add.cpp:

int add(int x, int y)
{
    return x + y;
}

// add.h: 

// int add(int x, int y);                   // function prototype for add.h