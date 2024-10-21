#include <iostream>
#include <string>

using namespace std;

int set_array(int array[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        
        if(cin >> array[i])
        {
            count ++;
        }
        else
        {
            break;
        }
    }
    return count;
}
void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }

}
int main()
{
    const int SIZE = 10;
    int guesses[] = {12, 43, 23, 43, 23};

    int size = sizeof(guesses)/sizeof(guesses[0]);

    print_array(guesses, size);

    int array_demo[SIZE];

    cout << endl;

    size = set_array(array_demo, SIZE);
    print_array(array_demo, size);
    cin.clear();

    return 0;
}