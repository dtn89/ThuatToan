#include <iostream>

using namespace std;

int main()
{
    enum class Season {spring, summer, fall, winter};
    Season now = Season::winter;
    switch(now)
    {
        case Season::spring:
            break;
        case Season::summer:
            break;
        case Season::fall:
            break;
        case Season::winter:
            cout << "Stay warm!" << endl;
            break;
    }
    return 0;
}