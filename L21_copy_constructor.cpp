/*
Implicit copy copy constructor do not deep copy the pointer.
In that case it is better to have copy constructor explicitly defined.
*/

#include <iostream>

template<class U>
class Area
{
    private:
        U width;
        U height;
        U* ptr;

    public:
        // when other constructor is defined this default 
        // implicit constructor will not be defined automatically
        Area(){}
        Area(){} = delete;

        Area(U width_, U height_, U length_): width{width_}, height{height_} 
        {
            std::cout << "Allocating memory of the pointer" << "\n";

            ptr = new U;
            *ptr = length_; 
        }

        //copy constructor 
        Area(const Area& obj)
        {
            // initializing private variables
            width = obj.width;  
            height = obj.height;
            ptr = new U;
            *ptr = *(obj.ptr);
        }

        ~Area(void)
        {
            std::cout << "Freeing memory." << "\n";
            delete ptr;
        }

        const U get_area() const {return this->width * this->height;}
        const U get_volume() const {return this->width * this->height * *ptr;}
};

int main()
{
    Area<double> p(2, 4, 6);
    Area<double> t(5, 7, 4);
    Area<double> s;

    std::cout << "Area of p: " << p.get_area() << "\n";  // 8
    std::cout << "Area of t: " << t.get_area() << "\n";  // 35

    p = t;
    std::cout << "Area of p: " << p.get_area() << "\n";  // 35 // value copied from t
    std::cout << "Volume of p: " << p.get_volume() << "\n";  // 140 // value copied from t

    Area<double> r = t;
    std::cout << "Volume of r: " << r.get_volume() << "\n";  // 140 // value copied from t

    return 0;
}
