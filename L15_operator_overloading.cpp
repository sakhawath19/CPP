/*
First, almost any existing operator in C++ can be overloaded. 
The exceptions are: conditional (?:), sizeof, scope (::), member selector (.), member pointer selector (.*), typeid, and the casting operators.

Second, you can only overload the operators that exist. 
You can not create new operators or rename existing operators. For example, you could not create an operator ** to do exponents.

Third, at least one of the operands in an overloaded operator must be a user-defined type. 
This means you can not overload the plus operator to work with one integer and one double. However, you could overload the plus operator to work with an integer and a Mystring.

Fourth, it is not possible to change the number of operands an operator supports.

Finally, all operators keep their default precedence and associativity (regardless of what they’re used for) and this can not be changed.
*/

// Prefer overloading operators as normal functions instead of friends if it’s possible to do so without adding additional functions.

#include <iostream>

class Cents
{
    private:
        int m_cents;
    
    public:
        Cents(int cents){ this->m_cents = cents; }

        friend Cents operator +( Cents &c1, Cents &c2 );

        friend Cents operator +( int value, Cents &c1 );

        // friend function defined inside the class
        friend Cents operator -(Cents &c1, int value)
        {
            return Cents(c1.m_cents - value);
        }

        // without const this function is not accessable by other function outside the class 
        int get_cents() const { return this->m_cents; } 
};

Cents operator +( Cents &c1, Cents &c2)
{
    return Cents(c1.get_cents() + c2.get_cents()); 
}

Cents operator +(int value, Cents &c)
{
    return { value + c.m_cents };
}


// note: this function is not a member function nor a friend function!
Cents operator *(const Cents &c1, const Cents &c2)
{
	// use the Cents constructor and operator+(int, int)
        // we don't need direct access to private members here
	return Cents(c1.get_cents() * c2.get_cents());
}

int main()
{
	Cents cents1{ 6 };
	Cents cents2{ 8 };
	Cents cent_sum{ cents1 + cents2 };
	std::cout << "I have " << cent_sum.get_cents() << " cents.\n";

    Cents total = cents1 + cents2;
    std::cout << "I have " << cent_sum.get_cents() << " cents.\n";

    Cents cent_sub{ cents1 - 2 };
	std::cout << "I have " << cent_sub.get_cents() << " cents.\n";
 
    // Cents cent_sum2{ 5 + Cents{2} };
    Cents c2{ 6 + cents1 };
	std::cout << "I have " << c2.get_cents() << " cents.\n";

    Cents c3{ cents1 * cents2 };
	std::cout << "I have " << c3.get_cents() << " cents.\n";

	return 0;
}