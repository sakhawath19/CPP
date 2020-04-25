// Literal constants (usually just called literals) are values inserted directly into the code.

#include <iostream>
#include <string>
using std::cout; 

int main()
{
    auto a = 5U;                // U or u is known as unsigned integer
    auto b = 4UL;               // unsigned long long
    auto c = 1ULL;

    auto x = 5.5;               //without literal constant it is double
    auto y = 5.F;

    int number = 30;

    bool myNameIsAlex { true }; // true is a boolean literal
    cout << 3.4  << "\n";           // 3.4 is a double literal(by default float is double)

    cout << "Hello, world!" << "\n"; // "Hello, world!" is a C-style string literal
    cout << "Hello," " world!" << "\n"; // C++ will concatenate sequential string literals

    int t{ 012 }; // 0 before the number means this is octal
    cout << t << "\n";

    int v{ 0xF }; // 0x before the number means this is hexadecimal
    cout << v << "\n";

    return 5;                   // 5 is an integer literal

 }