#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    return 0;
}

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