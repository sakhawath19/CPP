/* 
- Few tactics for debugging
- uses of std::cerr for unbuffered printing
    -use it without indenting so that you remember to delete it later
- Uses of conditional macro                 // code clutter, so not recommended
- Uses of logger file, example plog logger  // people use it normally for any application 
- Uses of integrated debugger               // Useful to learn it 
    - stepping, running and breakpoints, watching variables, the call stack



// Example of conditionalizing code
#include <iostream>
 
#define ENABLE_DEBUG // comment out to disable debugging
 
int getUserInput()
{
#ifdef ENABLE_DEBUG
std::cerr << "getUserInput() called\n";
#endif
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}
 
int main()
{
#ifdef ENABLE_DEBUG
std::cerr << "main() called\n";
#endif
    int x{ getUserInput() };
    std::cout << "You entered: " << x;
 
    return 0;
}




// Example of plog logger
#include <iostream>
#include <plog/Log.h> // Step 1: include the logger header
 
int getUserInput()
{
	LOGD << "getUserInput() called"; // LOGD is defined by the plog library
 
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}
 
int main()
{
	plog::init(plog::debug, "Logfile.txt"); // Step 2: initialize the logger
 
	LOGD << "main() called"; // Step 3: Output to the log as if you were writing to the console
 
	int x{ getUserInput() };
	std::cout << "You entered: " << x;
 
	return 0;
}
*/