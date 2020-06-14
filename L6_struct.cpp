/*
Access modifier:
public                                      // accessed by object
private                                     // only can be accessed inside class
protected

struct are by default public
class are by default private

In c++ struct and class are similar other than default access modifier
conventionally c++ uses PODS, that means struct only used for data variables 

By convention struct name starts with capital letter 

READ: Accessing structs across multiple files
https://www.learncpp.com/cpp-tutorial/47-structs/
*/

#include <iostream>

struct Employee
{
    short id; 
    int age {0};                            // non-static member initialization 
    double wage; 
}; 

// Nested structure. Company contains another structure name Employee
// Later see how to access it 
struct Company
{
    Employee CEO;
    int total_employees;
};

void print_info(Employee employee);
Employee info_template();

int main()
{
    Employee joe;                           // create an Employee struct for Joe
    joe.id = 14;                            // assign a value to member id within struct joe
    joe.age = 32;                           // assign a value to member age within struct joe
    joe.wage = 24.15;                       // assign a value to member wage within struct joe
    
    // frank.id = 2, frank.age = 28, 
    // **frank.wage = 0.0 (default initialization)
    Employee frank{ 2, 28 };                
    
    Employee adam = {3, 29, 40000};         // C++11 only 

    std::cout << adam.wage << std::endl;

    // ADVANTAGE to use structure. 
    // Sending whole bunch of information to the function 
    print_info(adam);        

    // Employee jim{info_template()} or
    Employee jim = info_template();   
    std::cout << jim.age << std::endl;    

    Company grammen {{4, 80, 400000}, 5000};    // Initializing nested structure

    std:: cout << grammen.CEO.age << std::endl;      

    // a short is 2 bytes, an int is 4 bytes, and a double is 8 bytes
     std::cout << "The size of Employee is " << sizeof(Employee) << '\n'; 

    return 0;
}

void print_info(Employee employee)
{
    std::cout << "ID:   " << employee.id << '\n';
    std::cout << "Age:  " << employee.age << '\n';
    std::cout << "Wage: " << employee.wage << '\n';
}

Employee info_template()
{
    // All the information of Employee struct would be zero
    // Multiple wasys to define it
    // return {0, 0, 0}; or
    // Employee dummy{0, 0, 0}; 
    // return dummy;
    return {};
}

/*
#include <iostream>

struct User
{
    std::string first_name;
    std::string last_name;
    
    std::string get_status()
    {
        return status;
    }
    
    private:
        std::string status = "Gold";
};

int main()
{
    User user;
    user.first_name = "Caleb";
    user.last_name = "Curry";
    //user.status = "Gold";                 //private member is not accessable

    std::cout << "First name: " << user.first_name << std::endl;
    std::cout << "Status: " << user.get_status() << std::endl;

    return 0;
}

*/


