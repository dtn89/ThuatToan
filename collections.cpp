#include <iostream>
#include <string>

using namespace std;


void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }

}
int main()
{
    int guesses[] = {12, 43, 23, 43, 23};

    int size = sizeof(guesses)/sizeof(guesses[0]);

    print_array(guesses, size);

    return 0;
}