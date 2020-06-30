#include <iostream>

class Base
{
protected:
    int m_value;
 
public:
    Base(int value)
        : m_value(value)
    {
    }
 
    void identify() { std::cout << "I am a Base\n"; }
};

class Derived: public Base
{
public:
    Derived(int value)
        : Base(value)
    {
    }
 
    int GetValue() { return m_value; }
 
    void identify()
    {
        Base::identify(); // call Base::identify() first
        std::cout << "I am a Derived\n"; // then identify ourselves
    }
};

int main()
{
    Base base(5);
    base.identify();
 
    Derived derived(7);
    derived.identify();
 
    return 0;
}

/* 
First, main() calls C(int, double, char). The C constructor calls B(int, double). 
The B constructor calls A(int). Because A does not inherit from anybody, 
this is the first class we’ll construct. A is constructed, prints the value 5, 
and returns control to B. B is constructed, prints the value 4.3, and returns control to C. 
C is constructed, prints the value ‘R’, and returns control to main(). And we’re done!
*/

/*
#include <iostream>
 
class A
{
    public:
        A(int a)
        {
            std::cout << "A: " << a << '\n';
        }
};
 
class B: public A
{
    public:
        B(int a, double b)
        : A{ a }
        {
            std::cout << "B: " << b << '\n';
        }
};
 
class C: public B
{
    public:
        C(int a , double b , char c)
        : B{ a, b }
        {
            std::cout << "C: " << c << '\n';
        }
};
 
int main()
{
    C c{ 5, 4.3, 'R' };
 
    return 0;
}

*/

/*
#include <iostream>

class GrandParents
{
    private:
        std::string name;
        int age;
        
    public:    
        GrandParents(){ this-> name = "Khalil";}

        GrandParents(int age): age{age} {}

        GrandParents(std::string name){ this->name = name; }

        void grand_parents_name()const
        {
            std::cout << "Grand Parents Name Name: " << name << std::endl;
        }

        void set_age(int age){this-> age = age;}

        const int get_age() const
        { 
            std::cout << "Age of Grand Parents: " << age << std::endl;
            return age; 
        }
};


class Parents: public GrandParents
{
    private:
        std::string name;
        
    public:    
        Parents(){ this-> name = "Sultana";}
        Parents(std::string name){ this->name = name; }

        void parents_name()const
        {
            std::cout << "Parents Name: " << name << std::endl;
        }

        Parents(int grand_parents_age): GrandParents{grand_parents_age} {} 
};


class Sports
{
    // do something
    public:
        void game() const{ std::cout << "Football" << std::endl; }
};

class Child: public Parents, public Sports
{
    private:
        std::string name;
        
    public:    
        Child(std::string name)
            { 
                this->name = name; 
            }

        void child_name()const
        {
            std::cout << "Child Name: " << name << std::endl;
        }

};

int main()
{
    Child c("Sakhawath");
    c.child_name();
    c.parents_name();
    c.grand_parents_name();
    c.game();
    c.get_age();
}
*/