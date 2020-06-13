/* 
enum class was added to C++ in C++11.
Enum class is not a conventional C++ class.
It is used to avoid weird comparison between two different enumerators from different enumerations.

Weird comparison was possible because
enumerators would have same integer value from different enumerations.

This means that the compiler will not implicitly compare enumerators from different enumerations. 
If you try to do so, the compiler will throw an error, as shown in the example above.
*/

/*
#include <iostream>
 
int main()
{
    enum class Color
    {
        red,
        blue
    };
    
    // color is Color type variable
    Color color{ Color::red };                              // initializing color variable 
 
    if (color == Color::red)                                // this is okay
        std::cout << "The color is red!\n";
    else if (color == Color::blue)
        std::cout << "The color is blue!\n";
 
    std::cout << static_cast<int>(color);                   // static_cast is required to get its integer value

    return 0;
}

*/

// Great example 

#include <iostream>
 
enum class Gender {
    BOY,
    GIRL,
};
 
void print_gender(Gender gender);
Gender get_gender_input();
 

int main()
{
    print_gender(get_gender_input());
}
 
Gender get_gender_input() {
    std::cout << "Are you a boy or a girl?" << '\n' << "Enter 0 for boy, 1 for girl: " << '\n';
    
    int gender_input{};
    
    std::cin >> gender_input;
    
    return (static_cast<Gender>(gender_input));
}
 
void print_gender(Gender gender) {
    if (gender == Gender::BOY) {
    
        std::cout << "You are a boy.";
    }
    
    else if (gender == Gender::GIRL) {
    
        std::cout << "You are a girl.";
    }
}