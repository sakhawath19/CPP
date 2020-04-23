// Header and Header guard explained

/* Defination 
Header files allow us to put declarations in one location and then import them wherever we need them. 
This can save a lot of typing in multi-file programs. 

When it comes to functions and objects, it’s worth keeping in mind that 
header files typically only contain function and object declarations, 
not function and object definitions 

When we #include <iostream>, we’re requesting that the preprocessor copy all of the content 
(including forward declarations for std::cout) from the file named “iostream” into 
the file doing the #include
*/



/* Including header files from other directories
#include "headers/myHeader.h"               //bad practice
#include "../moreHeaders/myOtherHeader.h"   //bad practice

//better practice
Set an include path(where other header files are located) or search directory in your IDE project settings.
*/




/* Order header files 
Order your #includes as follows: your own user-defined headers first, then 3rd party library headers, 
then standard library headers, with the headers in each section sorted alphabetically.
*/



/* Headers may include other headers */




/* .................................HEADER GUARD......................................... */
// it prevents double inclusion of header file 
// In the example two header file added in main file. Another cpp file contains all functions 

/*
// square.h
#ifndef SQUARE_H
#define SQUARE_H
 
int getSquareSides();                   // forward declaration for getSquareSides
int getSquarePerimeter(int sideLength); // forward declaration for getSquarePerimeter
 
#endif


// geometry.h 
#ifndef GEOMETRY_H
#define GEOMETRY_H
 
#include "square.h"                     // another header file included in this header file
 
#endif


// square.cpp                           // all the function definition defined here
#include "square.h"

int getSquareSides()                    // actual definition for getSquareSides
{
    return 4;
}
 
int getSquarePerimeter(int sideLength)
{
    return sideLength * getSquareSides();
}



// main.cpp
#include "square.h"                     // square.h is also included once here
#include "geometry.h"                   
#include <iostream>
 
int main()
{
    std::cout << "a square has " << getSquareSides() << " sides\n";
    std::cout << "a square of length 5 has perimeter length " << getSquarePerimeter(5) << '\n';
 
    return 0;
}*/
