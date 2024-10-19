#include <iostream>
#include <string>

using namespace std;

int main()
{
    int answer = 11;
    cout << "Guess the number: ";
    int guess;
    cin >> guess;
    int points = guess == answer ? 10 : 0;
    guess == answer ? cout << "Good job!" << endl : cout << "Bad job :(" << endl;
    cout << "Your point is: " << points << endl;
    return 0;
}