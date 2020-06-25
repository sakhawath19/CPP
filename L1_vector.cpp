#include <iostream>
#include <vector>

using std::cout;

// vector remember its length, Not needed to send size of the vector
void print_length(const std::vector<int>& vect)
{
    cout << "The length of the vector is:" << vect.size() << std::endl;
}

int main()
{

    // no need to specify length to initialiaze vector
    std::vector<int> vec;
    std::vector<int> vec2 = {3, 4, 5, 6};       // use initializer list to initialize vec
    std::vector<int> vec3 {7, 8, 9, 4};

    vec = { 0, 1, 2, 3, 4 };                    // Initialized later

    vec2 = {3, 4, 5, 6, 7};                     // vector length is now changed to 5

    	
    vec2[6] = 2;                                // no bounds checking

    cout << vec2[4] << std::endl;
    cout << vec3[6] << std::endl;
    cout << vec3[5] << std::endl;               // We would not get any value at this position 

    //vec.at(7) = 3;                            // checks vector boundary and fails to execute.
                                                // Since vec size was 5 


    //std::vector vec4 { 9, 7, 5, 3, 1 };       // deduced to std::vector<int> // it works for c++17

    print_length(vec);                          // passing vector to a function

    vec.resize(7);                              // Increased size by adding default value 0 (for integer)

    for (int i: vec)
    {
        cout << i << std::endl;
    }

    // resizing is computationally expensive 
    // better to initialize vector with fixed size such as std::vector<int> vec(3)
    vec.resize(3);                               // Keep its original value but resized it

    cout << "Resized vector:" << std::endl;

    for (int i : vec)
    {
        cout << i << std::endl;
    }
    
    return 0;
}