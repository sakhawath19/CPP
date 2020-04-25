// Two type of constant 
// Compile time constant and run time constant
// compile-time should be declared as constexpr(best practice)
// run-time constant should be declared as const(best practice)

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    constexpr double gravity { 9.8 }; // ok, the value of 9.8 can be resolved at compile-time
    //gravity = 9.9; // not allowed, this will cause a compile error
    constexpr int sum { 4 + 5 }; // ok, the value of 4 + 5 can be resolved at compile-time
 
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    const int myAge { age }; // not okay, age can not be resolved at compile-time
    //constexpr int myAge { age }; // not okay, age can not be resolved at compile-time
    return 0;
}




/*
//example of constant modifier 
#include <iostream>
#include <vector>

void do_something(const int data[])
{

}

void print_array(const int data[], int size)
{
    for(int i = 0; i < size; i++)
    {
        // const modifier will not allow to modify the original data
        //data[i]++; 
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
    do_something(data);
}

int main()
{
    int data[] = {1,2, 3};
    print_array(data, 3);

    std::cout << data[0] << std::endl;
    return 0;
} */





// Example of symbolic constant such as macros 
/*
#include <iostream>
using std::cout;
using std::endl;

//#define identifier substitution_text
#define X 10 //macros // best practice to use constexpr instead of macros

int main()
{
    const int x = 5;
    const int b = 4;

    enum { y = 100}; //enum 

    cout << b << endl;
    cout << X << endl;
    cout << y << endl;
    return 0;
}*/