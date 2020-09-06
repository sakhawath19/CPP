#include <iostream>

using std::cout;

class A
{
    private:
        const int a;
        int b;

    public:
        const int c;    // accessable by constant and non constant object
        int d;

        A(int val1, int val2, int val3, int val4): a(val1), b(val2), c(val3), d(val4) {}

        int get_normal() {return this->a;}          //non constant function not accessable by constant object
        int& get_r() {return this->b;}
        const int& get_rc() {return this->c;}

        // Constant function will not allow to change any value
        int get_cf() const {return this->a;}        // accessable by constant and non constant object
        const int& get_rcf() const{return this->d;} // accessable by constant and non constant object
        
};

int main()
{
    const A ob(1, 2, 3, 4);

    A ob_n(11, 12, 13, 14);  

    // cout << "Is it accessable?" << ob.a;  // private member not accessabe 
    // cout << "Is it accessable?" << ob.b;  // same problem
    
    cout << "Is it accessable? " << "Then what is the output: " << ob.c << "\n"; 

    // public member function is accessable by constant object 
    cout << "Is it accessable? " << "Then what is the output: " << ob.d << "\n"; 
    
    // ob.d = 6; // constant object would not change any member function's value
    ob_n.d = 6;  // normal object is allowing 

    cout << "changed value: " << ob_n.d << "\n";
    // cout << "Is it accessable?" << ob.get_norml() << "\n"; // not accessable by constant object 

    cout << "value of c: " << ob_n.c << "\n"; 
    cout << "Function rcf returned: " << ob_n.get_rcf() << "\n";

    return 0;
}