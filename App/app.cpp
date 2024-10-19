#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void play_game()
{
    int random = rand() % 251;
    cout << random << endl;
    while(true)
    {
        int guess;
        cout << "Guess a number: ";
        cin >> guess;
        if(guess == random)
        {
            cout << "You win\n";
            break;
        }
        else if (guess < random)
        {
            cout << "Too low\n";
        }
        else
        {
            cout << "Too high\n";
        }
    }
}
int main()
{   
    srand(time(NULL));  //get a random sheet so that every run the random number will be different as each other
    int choice;   
    do
    {
        cout << "0. Quit\n1. Play Game\n";
        cin >> choice;
        switch (choice)
        {
            case 0:
                cout << "Thanks for nothing\n";
                return 0;
            case 1:
                play_game();
                break;
            default:
                break;
        }

    } while (choice != 0);
    
    
    return 0;
}