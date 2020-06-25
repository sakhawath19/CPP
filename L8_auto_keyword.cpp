/*
When initializing a variable, the auto keyword can be used in place of the type 
to tell the compiler to infer the variable’s type from the initializer’s type. 
This is called type inference (also sometimes called type deduction)

Avoid using type inference for function return types(best practice).
*/

#include <iostream>

// int addition(int x, int y) and expression with auto are same
// auto is helping to align the function name only(uses of auto in function return type)
auto addition(int x, int y) -> int;
auto division(int x, int y) -> double;
auto multiplication(int x, int y) -> int;


int main()
{
    auto d{ 5.0 };                          // 5.0 is a double literal, so d will be type double
    auto i{ 1 + 2 };                        // 1 + 2 evaluates to an int, so i will be type int

    std::cout << "Addition: " << addition(5, 6) << std::endl;
    std::cout << "Division: " << division(6, 5) << std::endl;
    std::cout << "Multiplication: " << multiplication(5, 6) << std::endl;
}

auto addition(int x, int y) -> int 
{
    return (x + y);
}

auto division(int x, int y) -> double 
{
    return (x/y);
}

auto multiplication(int x, int y) -> int 
{
    return (x * y); 
}
/*
void add_and_print(auto x, auto y)              // this is allowed in C++20 only
{
    std::cout << "Sum: " << x + y << std:endl;
}
*/