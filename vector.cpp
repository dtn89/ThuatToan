#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

void print_vector(vector<int> &data)
{
    data.push_back(200);
    for(int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t";
    }
    cout << endl;
}

int main()
{
    vector<int> items = {12, 13};
    items.push_back(100);
    cout << items.size() << endl;
    cout << items[items.size() - 1] << endl;
    items.pop_back();
    cout << items[items.size() - 1] << endl;
    vector<int> value = {1, 2, 3, 5};
    print_vector(value);
    print_vector(value);
    print_vector(value);
    print_vector(value);
    return 0;
}
