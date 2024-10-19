#include <iostream>
#include <string>

using namespace std;

int main()
{
    string password = "hello123";
    string guess = "";
    do
    {
        /* code */
        cout << "Get the password: ";
        getline(cin, guess);
    } while (guess != password);
    
    return 0;
}