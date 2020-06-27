#include <iostream>
using namespace std;

//Must be known to TWO
//before declaration of ONE.
// one member function of a class is friend of another class 

/* Friend function: 
A friend function is a function that can access the private members of a class as though it were a member of that class. 
A friend function may be either a normal function, or a member function of another class. 
It does not matter whether you declare the friend function in the private or public section of the class.
*/

class ONE;

class TWO
{
public:
  void print(ONE& x);
};

class ONE
{
    int a, b;
    friend void TWO::print(ONE& x);       // print is a function of class TWO and freind function of class ONE

    friend void access_private_member_of_ONE_class(class ONE& one_1);

    friend class Display;                 // friend class or function can be declared anywhere

public:
  ONE() : a(1), b(2) { }
};

// Display is a friend of ONE class 
// it's member can access private member of ONE class 
class Display
{
    private:
        bool display_val;

    public:
        void display_item(class ONE& one_1)
        {
            cout << "From display" << std::endl;
            cout << "a is " << one_1.a << endl;
            cout << "b is " << one_1.b << endl;
        }
};

// print function is member of TWO class and also friend of ONE class
// Since it is friend of ONE class, it can access private member of ONE class 
void TWO::print(ONE& x)
{
  cout << "a is " << x.a << endl;
  cout << "b is " << x.b << endl;
}

// this is not a member function of ONE class 
void access_private_member_of_ONE_class(class ONE& one_1)
{
    cout << "a is " << one_1.a << endl;
    cout << "b is " << one_1.b << endl;

    // Resetting value
    one_1.a = 4;
    cout << "a has been changed: " << one_1.a << endl;
}


int main()
{
    ONE one_obj;
    TWO two_obj;

    // print is a member function of TWO class but accessing private member of ONE class; see defination 
    two_obj.print(one_obj); 

    // friend function accessing private member of ONE class; see the defination 
    access_private_member_of_ONE_class(one_obj);

    two_obj.print(one_obj);

    Display disp;
    disp.display_item(one_obj);

    return 0;

}


