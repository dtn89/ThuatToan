#include <iostream>
#include <string>

using namespace std;

int main()
{
    int guesses[] = {12, 43, 23, 43, 23};

    int size = sizeof(guesses)/sizeof(guesses[0]);

    cout << size << endl;

    for(int i = 0; i < size; i++)
    {
        cout << guesses[i] << endl;
    }

    return 0;
}