// Enum is a user defined data type 
// where we specify a set of values for a variable
// and the variable can only take one out of a small set of possible values. 

/*
enum Direction {East, West, North, South}dir;

Here enumeration name is direction which can take only 1 value out of 4 specified values
dir is the enum variable 
*/


#include <iostream>
using std::cout;

// dir is an enum variable
// Direction is the defined enumeration 
// Enumeration names are often named starting with a capital letter
// Each enumerator is automatically assigned an integer value based on its position in the enumeration list.
enum Direction 
{
   EAST,                                    // Assigned 0          
   WEST,                                    // Assigned 1
   NORTH = 33,                              // Default values can be changed like North
   SOUTH} dir; 

int main()
{
   dir = WEST;                              
   cout << dir << "\n";                            

   Direction other_dir;                     // another way to declare enum variable
   
   other_dir = NORTH;
   cout << other_dir << "\n";

   return 0;
}
