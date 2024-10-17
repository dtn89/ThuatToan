#include <iostream>

using namespace std;

int main()
{
    enum season {spring, summer, fall, winter};
    season now = winter;
    switch(now)
    {
        case spring:
            break;
        case summer:
            break;
        case fall:
            break;
        case winter:
            cout << "Stay warm!" << endl;
            break;
    }
    return 0;
}