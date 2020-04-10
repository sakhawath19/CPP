#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void print_vector(std::vector<int> vector)
{
    cout << "Number you have guessed are: \n";
    for(int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
    cout << endl;
}
void play_game()
{
    std::vector<int> guesses;
 
    int random = rand() % 251;
    cout << "Generate random no. " << random << endl;

    while(true)
    {
        int guess;
        cout << "Guess a integer number: ";
        cin >> guess;
        guesses.push_back(guess); //it is postfix, so value will be incremented later
        
        if(guess == random)
        {
            cout << "You win" << endl;
            break;
        } else if(guess < random)
        {
            cout << "Too low" << endl;
        }else
        {
            cout << "Too high" << endl;
        }   
       
    }
    print_vector(guesses);
}

int main()
{
    srand(time(NULL));
    int choice;
   
    do 
    {
        cout << "0. Quit \n1. Play Game\n";
        cin >> choice;

        switch(choice)
        {
            case 0:
                cout << "You have quitted the game" << endl;;
                return 0;
            case 1:
                play_game();
                break;
        }

    }while(choice!=0);

}