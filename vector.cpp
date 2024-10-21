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
    cout << items[items.size() - 1] << endl;
    items.pop_back();
    cout << items[items.size() - 1] << endl;
    return 0;
}
