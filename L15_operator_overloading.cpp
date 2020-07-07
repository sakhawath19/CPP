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

#include <iostream>

class Cents
{
    private:
        int m_cents;
    
    public:
        Cents(int cents){ this->m_cents = cents; }

        friend Cents operator +( Cents &c1, Cents &c2 );

        friend Cents operator -(Cents &c1, int value)
        {
            return Cents(c1.m_cents - value);
        }

        int get_cents(){ return this->m_cents; }
};

Cents operator +( Cents &c1, Cents &c2)
{
    return Cents(c1.get_cents() + c2.get_cents()); 
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
 
	return 0;
}