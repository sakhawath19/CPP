
/* Although the language allows you to do so, avoid defining multiple variables in a single statement 
(even if they are the same type). Instead, define each variable in a separate statement 
(and then use a single-line comment to document what it is used for). */

// best practice to initialize variable whent it is created

int a = 5; // copy initialization
int c( 7 ), d( 8 ); // direct initialization
int e{ 9 }; // brace initialization (preferred)

// type identifier { expression }; // decleration and initialization of an identifier
int width{ 5 }; // direct brace initialization of value 5 into variable width (preferred)
int x{ 2 + 3 }; // initialization with expression 
int height = { 6 }; // copy brace initialization of value 6 into variable height

int x{}; // define variable x to hold user input

// identifier can not be keyword
// upper case, lower case, numbers and underscore can be used 
// name of the identifier cannot start with numbers

// best practice
// my_varaible_name // separated by underscore
// myVariableName // camelcase
// My_variable_name // valid but unconventional 


// std::cout << "Hello world!";
// int x{ 5 };
// What are “Hello world!” and 5? They are literals. 
// A literal (also known as a literal constant) is a fixed value that has been inserted directly 
// into the source code.

// (), [], % and ^ are operators. ^ is a bitwise xor, not a power operation.
// {} isn't an operator. It's used for scoping and initialization.
// $ has no use in C++.

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
