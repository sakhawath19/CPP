//function overload is not possible by changing return type
//in c++ function overloading is done by changing arguments only

#include <iostream>

double power(int base, int pow = 2) 
{
    int total = 1;

    for(int i = 0; i < pow; i++)
    {
        total *=base;

    }
    return total;
}

struct Rectangle 
{
    double length;
    double width;
};

double area(double length, double width)
{
    return length * width;
}

double area(double length)
{
    return length * length;
}

double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;

    std::cout << area(rectangle.length, rectangle.width) << std::endl;
    std::cout << area(rectangle.length) << std::endl;
    std::cout << area(rectangle) << std::endl;
    std::cout << power(3) << std::endl;
}