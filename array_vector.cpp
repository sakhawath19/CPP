// lesson for array
// lesson for vector
// lesson for templatized array

#include <iostream>
#include <vector>

//passing by reference
//without passing by reference it just copy the whole value
void print_vector(std::vector<int> &data)
{
    data.push_back(12);
    for(int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    } std::cout << std::endl;
}

int main()
{
    std::vector<int> data = {1, 2, 3};
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
}

/*
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
//using std::vector;
//run this command to execute this program
//g++ array_vector.cpp -std=c++11
int main()
{
    std::vector<int> data = {1, 2, 3};
    data.push_back(100);
    cout << data[data.size()-1] << endl;
    data.pop_back(); //remove the last element
    cout << data.size() << endl;
}*/


/*
#include <iostream>
#include <limits>

using namespace std;


void print_array(int array[], int size)
{
  
      for(int i = 0; i < size; i++ )
    {
        std::cout << array[i] << std::endl;
    }
}

int main()
{
    const int SIZE = 100;
    int guesses[SIZE];
    int count = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if(cin >> guesses[i])
        {
            count++;
        }else
        {
            break;
        }
        
    }
    print_array(guesses, count);
    cin.clear();
    cin.ignore(1000, '\n'); //this is to clear the previous unused string 

    std::string test;
    cin >> test;
    cout << test << endl;

    //alternative way to do that
    //cin.ignore(numeric_limits < streamsize>::max(), '\n');

    return 0;
}*/


/*
#include <iostream>
using namespace std;

//when array is passing to a function 
//array is working like pointer of the first element of the array
//so inside the function array size is not tracable
//Therefore you need to send the size as well

void print_array(int array[], int size)
{
    cout << size << endl;
    for(int i = 0; i < size; i++ )
    {
        std::cout << array[i] << std::endl;
    }
}

int main()
{
    int guesses[] = {12, 43, 23, 43, 23};
    int size = sizeof(guesses)/sizeof(int);

    print_array(guesses, size);

    return 0;
}*/


/*
# include <iostream>

int main()
{
    //int guesses[20]; // int guesses = {1, 2, 3};
    int guesses[10] = {12, 43, 23, 43, 23};
    int size = sizeof(guesses)/sizeof(guesses[0]);

    int num_elements = 5;

    for(int i = 0; i < num_elements; i++ )
    {
        std::cout << guesses[i] << std::endl;
    }
    return 0;
}
*/
