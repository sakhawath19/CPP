#include <iostream>
// argc: argument count
// argv: argument vector
// command line arguments always passed as strings

int main(int argc, char *argv[])
{
    std::cout << "Number of arguments: " << argc << std::endl; 

    for (int count{0}; count < argc; ++count)
        std::cout << argv[count] << std::endl;
    return 0;
}