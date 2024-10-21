#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    vector<int> items = {12, 13};
    items.push_back(100);
    cout << items.size() << endl;
    cout << items[2] << endl;

    return 0;
}
