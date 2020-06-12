// https://www.learncpp.com/cpp-tutorial/61-arrays-part-i/
// Fixed arrays cannot have a length based on either user input or some other value calculated at runtime.
// Fixed arrays have a fixed length that can not be changed.
#include <iostream>

int main()
{

    // using a literal constant
    int array[5];                           // Ok
    
    // using a macro symbolic constant
    #define ARRAY_LENGTH 5
    int array[ARRAY_LENGTH];                // Syntactically okay, but don't do this
    
    // using a symbolic constant
    const int arrayLength = 5;
    int array[arrayLength];                 // Ok
    
    // using an enumerator
    enum ArrayElements
    {
        MAX_ARRAY_LENGTH = 5
    };
    
    int array[MAX_ARRAY_LENGTH];            // Ok



    struct Rectangle
    {
        int length;
        int width;
    };
    
    Rectangle rects[5];                     // declare an array of 5 Rectangles
    rects[0].length = 24;

    std::cout << rects[0].length << std::endl;
}

