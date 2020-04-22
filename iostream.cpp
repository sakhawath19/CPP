// std::cout is used to output a value (cout = character output)
// std::cin is used to get an input value (cin = character input)
// << is used with std::cout, and shows the direction that data is moving
// \n is preffered over std::endl to avoid flashing 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x{ }; // define variable x to hold user input (and zero-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';
    return 0;
}


/*
int main()
{
    std::ifstream file ("hello.txt");
    
    std:: string line;
    getline(file, line);

    std::cout << line << std::endl;
    
    return 0;
}*/

/*
int main()
{
    std::ifstream file ("hello.txt");
    std::vector<std::string> names;
    std::string input;
    while(file >> input)
    {
        names.push_back(input);
    }

    for(std::string name: names)
    {
        std::cout << name << std::endl;
    }
    return 0;
} */
/*
int main()
{
    //alternative: std::ofstream file ("hello.txt");
    //std::ofstream file;
    //file.open("hello.txt");
    std::ofstream file ("hello.txt", std::ios::app);

    if(file.is_open())
    {
        std::cout << "success \n";
    }

    std::vector<std::string> names;
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Susan");

    for(std::string name: names)
    {
        file << name << std::endl;
    }
    //file << "hey";
    file.close();

    return 0;
} */