
#include <iostream>

int main()
{
    int answer = 11;
    std::cout << "Guess the number: ";
    int guess;

    std::cin >> guess;

    //if guess = answer then points gets 10 otherwise 0
    int points = guess == answer? 10 : 0; 
    std::cout << points << std::endl;

    guess == answer? std::cout << "Good job\n" : std::cout << "bad job\n";
}

