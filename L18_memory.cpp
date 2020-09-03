#include <iostream>
#include <new>

class Box {
   public:
      Box() { 
         std::cout << "Constructor called!" << "\n"; 
      }
      ~Box() { 
         std::cout << "Destructor called!" << "\n"; 
      }
};

int main()
{
    int *pint = new int (5);
    float *pfloat = new float;
    *pfloat = 2.85;

    //Initialized with null value then requested for memory 
    int *pref = NULL;
    
    if (!(pref = new int))
    {
        std::cout << "Memory allocation failed!" << "\n"; 
        exit(1);
    }
    else
        pref = pint;

    
    int *p_int_array = new int[3];

    *(p_int_array + 1) = 1;


    std::cout << *pint << "\n";     // 5
    std::cout << *pfloat << "\n";   // 2.85
    std::cout << *pref << "\n";     // 5
    std::cout << *(p_int_array + 1) << "\n"; // 1

    std::cout << pint << "\n";      // 0x1c1950
    std::cout << pref << "\n";      // 0x1c1950

    delete pint;
    delete pfloat;
    delete[] p_int_array; 

    std::cout << pint << "\n";      // 0x1c1950

    Box* myBoxArray = new Box[4];
    delete [] myBoxArray; // Delete array

    
    
    int *pthrow = NULL;
    
    if (!(pthrow = new(std::nothrow) int))
    {
        std::cout << "Memory allocation failed" << "\n";
    }
    else
    {
        *pthrow = 4;
    }
    
    delete pthrow;

    auto *ptr = new(std::nothrow) int(4);
    
    if (ptr==nullptr)
    {
        std::cout << "Memory allocation failed" << "\n";
    }

    delete ptr; 

    int a = 5, b = 10, c = 15;

    const int* foo;     // pointer to constant int.
    foo = &a;           // assignment to where foo points to.

    /* dummy statement*/
    // *foo = 6;           // the value of a can´t get changed through the pointer.

    foo = &b;           // the pointer foo can be changed.



    int *const bar = &c;  // constant pointer to int 
                        // note, you actually need to set the pointer 
                        // here because you can't change it later ;)

    *bar = 16;            // the value of c can be changed through the pointer.    

    /* dummy statement*/
    // bar = &a;             // not possible because bar is a constant pointer. 

    return 0;
}