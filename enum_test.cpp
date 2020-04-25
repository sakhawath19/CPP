// Enum is a user defined data type 
// where we specify a set of values for a variable
// and the variable can only take one out of a small set of possible values. 

/*
enum direction {East, West, North, South}dir;

Here enumeration name is direction which can take only 1 value out of 4 specified values
dir is the enum variable 
*/


#include <iostream>
using std::cout;

// dir is an enum variable
// direction is the defined enumeration 
enum direction {East, West, North = 33, South}dir; // Default values can be changed like North

int main()
{
   dir = West;
   cout << dir << "\n";

   direction other_dir;                             // another way to declare enum variable
   
   other_dir = North;
   cout << other_dir << "\n";

   return 0;
}
