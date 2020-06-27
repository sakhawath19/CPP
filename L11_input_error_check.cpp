#include <iostream>
#include <iomanip>

#define LOG(x) std::cout << x << std::endl; 

int get_choice();

int main()
{
    int choice = -1;

    choice = get_choice();

    while (choice > 0)
    {
        switch(choice)
        {
            case 1:
                LOG("Option 1");
                break;

            case 2:
                LOG("Option 2");
                break;

            default:
                LOG("There is no such option");
                break;
        }

        choice = get_choice();
    }

    std::cout << "Quitting" << std::endl; 

    return 0;
}

int get_choice()
{
    int choice = 0;

    std::cout << "Enter choice: ";
    std::cin >> std::setw(1) >> choice;         // allowing only one integer 

    // Check error
    while(!std::cin.good()) 
    {
        // Report problem
        std::cout << "ERROR: wrong input! Insert an integer" << std::endl;

        // Clear stream
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        // Get choice again
        std::cout << "Enter choice: ";
        std::cin >> std::setw(1) >> choice;         
    }

    // Clear stream
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    return choice;
}