#include <iostream>
#include <string>

using std::string;

int main()
{
    string greeting = "What the hell?";
    std::cout << greeting.find("hell") << std::endl;
    greeting.replace(greeting.find("hell"), 4, "****");

    std::cout << greeting << std::endl;

    std::cout << greeting.substr(5, 2) << std::endl;

    std::cout << greeting.find_first_of("aeiou") << std::endl;

    //npos == -1

    if(greeting.find_first_of("!") == -1)
        std::cout << "Not found" << std::endl;

    //return 0 if it is equal
    if(greeting.compare("What the hell?"))
        std::cout << "Equals" << std::endl;

}


/*
#include <iostream>
#include <string>

using std::string;
using std::cout;

//string class is superior than c string
int main()
{
    string str1 = "hello";
    cout << str1 << std::endl;
    cout << str1[0] << std::endl;
    
    string empty_str;
    cout << empty_str << std::endl;

    string str2 ="World";

    cout << str1 + empty_str + str2 << std::endl; //concatenating

    str1 += "?"; //append

    cout << str1 << std::endl;

    //str1 is an instance of string class
    //length is a method of the string class
    //method = member function 
    cout << str1.length() << std::endl; 

    char name[] = "caleb"; // c string with fixed length

    string greeting;
    std::cin >> greeting; // it takes only one word at a time

    cout << greeting << std::endl;

    string line; 
    
    getline(std::cin, line);

    cout << line << std::endl;

    cout << greeting.length() << std::endl;
    cout << greeting.size() << std::endl;

    greeting.append("hi");
    greeting.insert(3, "    ");
    greeting.erase(2, 1);
    greeting.erase(greeting.length()-1);
    greeting.pop_back();
    greeting.replace(0, 4, "Heaven");
   
}*/