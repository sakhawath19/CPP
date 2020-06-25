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
    void *vptr = NULL;                                   // pointer has the address of null 
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
    std::cout << "Address of the first elements " << &aptr[0] << std::endl;
    std::cout << "Address of the second elements " << (aptr + 1) << std::endl; // Idea of pointer arithmatic 
    std::cout << "Value of the first index " << aptr[0] << std::endl;
    std::cout << "Value of the third index " << *(aptr+2) << std::endl;         

    // Use nullptr to initialize your pointers to a null value.
    // dereferencing null pointer would crash the program or would give garbage value
    float *fptr { 0 };                                  // ptr is now a null pointer
    float *fptr2;                                       // ptr2 is uninitialized
    fptr2 = 0;                                          // ptr2 is now a null pointer
    float *fptr3 { NULL };                              // ptr3 is now a null pointer
    float *fptr4 { nullptr };                           // ptr4 is now a null pointer    

    return 0;
}


// Example of void pointer
// Avoid using void pointer unless it is absolutely necessary
// Void pointer can point to any data type but direct dereferencing is not possible
// need to cast it 

/*
#include <iostream>
 
enum class Type
{
    INT,
    FLOAT,
    CSTRING
};
 
void printValue(void *ptr, Type type)
{
    switch (type)
    {
        case Type::INT:
            std::cout << *static_cast<int*>(ptr) << '\n'; // cast to int pointer and dereference
            break;
        case Type::FLOAT:
            std::cout << *static_cast<float*>(ptr) << '\n'; // cast to float pointer and dereference
            break;
        case Type::CSTRING:
            std::cout << static_cast<char*>(ptr) << '\n'; // cast to char pointer (no dereference)
            // std::cout knows to treat char* as a C-style string
            // if we were to dereference the result, then we'd just print the single char that ptr is pointing to
            break;
    }
}
 
int main()
{
    int nValue{ 5 };
    float fValue{ 7.5f };
    char szValue[]{ "Mollie" };
 
    printValue(&nValue, Type::INT);
    printValue(&fValue, Type::FLOAT);
    printValue(szValue, Type::CSTRING);
 
    return 0;
}
*/