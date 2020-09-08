
#include <iostream>
#include <string>

using std::cout;
using std::string;

void pass_value(int v)
{
    cout << "value passed: " << v << "\n";
    v = v + 1;
}


void pass_reference(int& v, string& str, int arr[], int size)
{
    // In C++ original array is passed to the function, so
    // any changes here will affect the original array
    cout << "Referenced value: " << v << "\n";
    v = v + 1;
    
    cout << "String sent: " << str << "\n";
    str = "Sakhawath";

    cout << "First value of array: " << arr[0] << "\n"; 
    arr[0] = 4;  
}

int& return_reference()
{
    // Not possible to return local variable because it get destroyed after the scope
    // static value last till the end of the program, so possible to return by reference
    static int v{35};

    return v;
}

void pass_address(int* v)
{
    cout << "value passed by address: " << *v << "\n";
    cout << "Referencing address: " << v << "\n";
    *v = *v + 1;
}

int* return_address(int size)
{
    int* ptr = new int[size];

    return ptr;
}
 
int main()
{
    int *array;
    array =  return_address(25);
 
    // do stuff with array
    array[0] = 1;
    cout << array[0] << "\n";
 
    delete[] array;
    
    int v{5};
    int r{15};
    int a{25};
    string s{"Sakha"};
    int arr[3] = {1, 2, 3};
    
    pass_value(v);
    cout << "Value has not been changed:" << v << "\n"; // 5
    


    pass_reference(r, s, arr, 3);
    cout << "String has been changed: " << s << "\n\n";
    cout << "Value has been changed:" << r << "\n\n";   // 16
    cout << "First value of array has been changed: " << arr[0] << "\n\n"; 

    

    int ref = return_reference();
    cout << "Returned reference: " << ref << "\n";
    


    pass_address(&a);
    cout << "Memory address of passing value: " << &a << "\n"; 
    cout << "Value has been changed: " << a << "\n"; // 26

    return 0;
}


