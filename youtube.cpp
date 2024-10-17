#include <iostream>
#include <cmath>
#include <string>

using namespace std;

#define MAX_NAME_LEN 60

static int name = 5;

int main()
{
    string greeting;
    // cin >> greeting;
    // cout << greeting << endl;
    getline(cin, greeting);
    cout << greeting << endl;
    return 0;
}