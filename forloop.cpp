#include <iostream>
#include <string>

using namespace std;

int factorial_calculation (int fact)
{
    int factorial = fact;
    for(int i = fact - 1; i > 1; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int number;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    cout << "Enter a number: ";
    cin >> number;
    int factorial = factorial_calculation(number);
    cout << "Fractorial of " << number << " is: " << factorial << endl;
    return 0;
}