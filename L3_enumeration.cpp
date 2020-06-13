// https://www.learncpp.com/cpp-tutorial/45-enumerated-types/
// Read what are enumerators useful for 
// Enum is a user defined data type 
// where we specify a set of values for a variable
// and the variable can only take one out of a small set of possible values.
// do not assign specific values to your enumerators (best practice)
// C++ allows same values for multiple enumerator. ***Try to avoid it.  

/*
enum Direction {EAST, WEST, NORTH, SOUTH}dir;

Here enumeration name is direction which can take only 1 value out of 4 specified values
dir is the enum variable 
*/

#include <iostream>
using std::cout;

// Define a new enumeration named Color
enum Color
{
    // Here are the enumerators
    // These define all the possible values this type can hold
    // Each enumerator is separated by a comma, not a semicolon
    // Name enumerators with prefix_lower_case
    // *** Avoid upper case 
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_WHITE,
    COLOR_CYAN,
    COLOR_YELLOW,
    COLOR_MAGENTA,                           // see note about trailing comma on the last enumerator below
};                                           // however the enum itself must end with a semicolon

// enumerator automatically takes values in ascending order 
enum Animal
{
   ANIMAL_CAT = -3,
   ANIMAL_DOG,                               // assigned -2
   ANIMAL_PIG,                               // assigned -1
   ANIMAL_HORSE = 5,
   ANIMAL_GIRAFFE = 5,                       // shares same value as ANIMAL_HORSE // Avoid it
   ANIMAL_CHICKEN                            // assigned 6  
};

void print_characteristics(Animal animal)
{
   if (animal == ANIMAL_CAT)
      cout << "Domeistic animal" << std::endl;
   else if(animal == ANIMAL_DOG)
      cout << "Faithful animal \n";
   else
   {
      cout << "Who knows"; 
   }
   
}

int main()
{
   Animal animal;
   animal = ANIMAL_DOG;

   print_characteristics(animal);

   // Define a few variables of enumerated type Color
   Color paint = COLOR_WHITE;
   Color house(COLOR_BLUE);
   Color apple { COLOR_RED };

   cout << apple << std::endl; 

   return 0;
}

// dir is an enum variable
// Direction is the defined enumeration 
// Enumeration names are often named starting with a capital letter
// Each enumerator is automatically assigned an integer value based on its position in the enumeration list.
/*
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

*/