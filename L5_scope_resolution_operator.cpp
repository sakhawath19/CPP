// C++ program to show that we can access a global  
// variable using scope resolution operator :: when   
// there is a local variable with same name  
#include<iostream>  
   
// Global x   
int x = 0;   
    
int main() 
{ 
  // Local x     
  int x = 10;  
  std::cout << "Value of global x is " << ::x; 
  std::cout<< "\nValue of local x is " << x;   
  return 0; 
}