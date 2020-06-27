// static variable keeps track of the value beyond scope 

/*
Static member functions have two interesting quirks worth noting. 
First, because static member functions are not attached to an object, 
they have no this pointer! This makes sense when you think about it -- 
the this pointer always points to the object that the member function is working on. 
Static member functions do not work on an object, so the this pointer is not needed.

Second, static member functions can directly access other static members (variables or functions), 
but not non-static members. This is because non-static members must belong to a class object, 
and static member functions have no class object to work with!
*/

#include <iostream>

class IDGenerator
{
private:
    static int s_nextID; // Here's the declaration for a static member
    int id;
 
public:
    static int getNextID(); // Here's the declaration for a static function

    static int public_id;  // decleration of static member

    IDGenerator(){ id = public_id++; }

    int get_public_id() { return id; } 
};
 

// Here's the definition of the static member outside the class.  Note we don't use the static keyword here.
// We'll start generating IDs at 1
int IDGenerator::s_nextID{ 1 };
int IDGenerator::public_id{1};
 
// Here's the definition of the static function outside of the class.  Note we don't use the static keyword here.
int IDGenerator::getNextID() { return s_nextID++; } 
 
int main()
{
    for (int count{ 0 }; count < 5; ++count)
        std::cout << "The next ID is: " << IDGenerator::getNextID() << '\n';  
        // static function does not belong to any function
        // it is not good idea to access static function or variables by class objects 
        // static variables holds its value beyond scope 

    IDGenerator first;
    IDGenerator second;
    IDGenerator third;
 
    std::cout << "Public id: " << first.get_public_id() << '\n';
    std::cout << "Public id: " << second.get_public_id() << '\n';
    std::cout << "Public id: " << third.get_public_id() << '\n';
    return 0;
}