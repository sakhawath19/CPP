/*
Pointer points to the address of varibles **only. 

When declaring a pointer variable, put the asterisk next to the variable name(best practice)

When declaring a function, put the asterisk of a pointer return value next to the type.(best practice)

Besides memory addresses, there is one additional value that a pointer can hold: a null value. 
A null value is a special value that means the pointer is not pointing at anything. 
A pointer holding a null value is called a **null pointer.
READ: std::nullptr_t 
https://www.learncpp.com/cpp-tutorial/6-7a-null-pointers/
*/


#include <iostream>

int main()
{
    int value{ 5 };
    double dvalue {4};
    std::cout << "&value: " << &value << std::endl;                    // prints address of value
    std::cout << "value: " << value << std::endl;                     // prints contents of value
    std::cout << "*(&value): " << *(&value) << std::endl;                 // prints 5
    
    // **pointer pointing to the address of integer value
    int *ptr;                                            // a pointer to an integer value
    ptr = &value;                                         // ptr points to the address of value 
    std::cout << "ptr: " << ptr << std::endl;                       // prints address held in ptr, which is &value
    std::cout << "*ptr: " << *ptr << std::endl;                      // dereference ptr (get the value that ptr is pointing to)

    double *dptr{&dvalue};                               // initializing double type pointer 
    std::cout << "*dptr: " << *dptr << std::endl;
    
    // *** IMPORTANT CONCEPT 
    *dptr = 7;                                          // *dptr is the same as dvalue, which is assigned 7
    std::cout << "*dptr: " << *dptr << std::endl;       // prints 7
    std::cout << "dvalue: " << dvalue << std::endl;

    // ARRAY and POINTER
    int array[]{1, 3, 5, 7};
    int *aptr{array};
    std::cout << "*aptr: " << *aptr << std::endl;
    std::cout << "Index refering value of address: " << aptr[0] << std::endl;

    // Use nullptr to initialize your pointers to a null value.
    // dereferencing null pointer would crash the program or would give garbage value
    float *fptr { 0 };                                  // ptr is now a null pointer
    float *fptr2;                                       // ptr2 is uninitialized
    fptr2 = 0;                                          // ptr2 is now a null pointer
    float *fptr3 { NULL };                              // ptr3 is now a null pointer
    float *fptr4 { nullptr };                           // ptr4 is now a null pointer    

    return 0;
}