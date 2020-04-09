//Control //flow
    //branching//if, switch
    //looping//while, for, do-while
#include <iostream>
#include <string>
//not working for this compiler
//to execute this program
//g++ control_flow.cpp -std=c++11
using std::string;

int main()
{
    enum calss Season{summer, spring, fall, winter};
    Season now = Season::winter;

    switch(now)
    {
        case summer:
            break;
        case spring:
            break;
        case fall:
            break;
        case winter:
            std::cout << "Stay warm!\n";
            break;
    }

    return 0;
}


/*
#include <iostream>
#include <string>

int main()
{
    enum season{summer, spring, fall, winter};
    season now = winter;

    switch(now)
    {
        case summer:
            break;
        case spring:
            break;
        case fall:
            break;
        case winter:
            std::cout << "Stay warm!\n";
            break;
    }

    return 0;
}
*/

/*
#include <iostream>
#include <string>

using std::string;

int main()
{
    std::string answer = "Caleb";
    std::string question = "Caleb";

    if(answer == question)
    {
        std::cout << "Correct guess" << std::endl;
    }
}*/


/*
#include <iostream>

int main()
{
    int age = 11;

    if(age < 13)
    {
       std::cout << "You are not old enough\n";
       return -1; //it will end the program
    }

    std::cout << "Always";
    return 0;
}*/
    