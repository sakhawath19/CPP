#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void play_game()
{
    int random = rand() % 251;
    cout << "Generate random no. " << random << endl;

    while(true)
    {
        int guess;
        cout << "Guess a integer number: ";
        cin >> guess;
        
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