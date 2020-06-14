// https://www.learncpp.com/cpp-tutorial/61-arrays-part-i/
// Fixed arrays cannot have a length based on either user input or some other value calculated at runtime.
// Fixed arrays have a fixed length that can not be changed.
#include <iostream>

enum StudentNames
{
    KENNY,                                  // 0
    KYLE,                                   // 1
    STAN,                                   // 2
    BUTTERS,
    CARTMAN,
    MAX_STUDENTS                            // 5
};

// Look at L4_enum_class to know more about it
enum class Employee
{
    andy,
    tuira,
    ulla,
    total_employee = 3
}; 

void pass_array(int odd_val[5]);
void pass_array_no_change(const int odd_val[]);

int main()
{
    int array_1[] = {1, 3, 5, 7};
    std::cout << "Size of the array: " << sizeof(array_1) << std::endl;

    /* 
    C++ does not copy an array when an array is passed into a function. 
    Instead, the actual array is passed. 
    This has the side effect of allowing functions to directly change the value of array elements!
    */
    std::cout << "Array before passing to function: " << array_1[0] << std::endl;
    
    pass_array(array_1);                    // passing array to the function 
    
    std::cout << "Actual array has been changed: " << array_1[0] << std::endl;

    pass_array_no_change(array_1);          // to unchange the array, const keyword is used in function parameter

    int testScores[MAX_STUDENTS];           // allocate 5 integers
    testScores[STAN] = 76;                  // assigning values in index 2



    int salary[static_cast<int>(Employee :: total_employee)];   // casting required to convert it to integer
    salary[static_cast<int>(Employee::andy)] = 60000;           // without casting it would not work 

    std::cout << "Salary: " << salary[static_cast<int>(Employee::andy)] << std::endl; // accessing array


    // using a literal constant; 
    int array[5];                           // array of integers
  
    // using a symbolic constant
    const int arrayLength = 5;
    int array2[arrayLength];                 // Ok

    struct Rectangle
    {
        int length;
        int width;
    };
       
    Rectangle rects[5];                     // array of rectangles
    rects[0].length = 24;

    std::cout << rects[0].length << std::endl;

    return 0;
}

void pass_array(int odd_val[])
{
    odd_val[0] = 0;

    std::cout << "Value inside function: " << odd_val[0] << std::endl;
}

void pass_array_no_change(const int odd_val[])
{
    // odd_val[0] = 0;                      // this array can not be altered 

    std::cout << "Array has not been changed: " << odd_val[0] << std::endl;
}
/*
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

    */

    /*
    struct Rectangle
    {
        int length;
        int width;
    };
    
    Rectangle rects[5];                     // declare an array of 5 Rectangles
    rects[0].length = 24;

    std::cout << rects[0].length << std::endl;
    
}
*/
