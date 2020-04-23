
//example of constant modifier 
#include <iostream>
#include <vector>

void do_something(const int data[])
{

}

void print_array(const int data[], int size)
{
    for(int i = 0; i < size; i++)
    {
        //this will modify the original data without data modifier is defiend as const
        //data[i]++; 
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
    do_something(data);
}

int main()
{
    int data[] = {1,2, 3};
    print_array(data, 3);

    std::cout << data[0] << std::endl;
    return 0;
}
/*
#include <iostream>
using std::cout;
using std::endl;

#define X 10 //macros

int main()
{
    const int x = 5;
    const int b = 4;

    enum { y = 100}; //enum 

    cout << b << endl;
    cout << X << endl;
    cout << y << endl;
    return 0;
}*/