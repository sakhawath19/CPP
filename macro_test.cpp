/*
In C++, a macro is a rule that defines how input text is converted into replacement output text.
There are two basic type of macros:
- object like macros
- function like macros 
*/



/* Object like macros can be defined in two ways 
#define identifier
#define identifier substitution_text
*/ //Avoid using these kind of macros


/* #include <iostream>
 
#define MY_NAME "Alex" // 
 
int main()
{
    std::cout << "My name is: " << MY_NAME;
 
    return 0;
} */




// The #ifdef preprocessor directive allows the preprocessor to check whether 
//an identifier has been previously #defined.

/* Conditional compilation 
#include <iostream>
 
#define PRINT_JOE
 
int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // if PRINT_JOE is defined, compile this code
#endif
 
#ifdef PRINT_BOB
    std::cout << "Bob\n"; // if PRINT_BOB is defined, compile this code
#endif
 
    return 0;
} */



//#if 0 to exclude a block of code from being compiled (as if it were inside a comment block):
/*
#include <iostream>
 
int main()
{
    std::cout << "Joe\n";
 
#if 0 // Don't compile anything starting here
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif // until this point
 
    return 0;
}*/




/* 
#define FOO 9 // Here's a macro substitution
 
#ifdef FOO // This FOO does not get replaced because it’s part of another preprocessor directive
    std::cout << FOO; // This FOO gets replaced with 9 because it's part of the normal code
#endif */