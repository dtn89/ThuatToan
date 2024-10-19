#include <iostream>
#include <string>

using namespace std;

int main()
{
    int factorial;
    cout << "Enter a number to factorial calculation: ";
    cin >> factorial;
    cout << "Factorial of " << factorial << " is: ";
    int i = factorial - 1;
    while(i > 1)
    {
        factorial *= i;
        i--;
    }
    cout << factorial << endl;
    return 0;
}