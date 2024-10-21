#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int missingNumber(int n, vector<int> arr)
{

    // Create hash array of size n+1
    vector<int> hash(n + 1, 0);

    for(int i = 0; i < n; i++)
    {
        cout << hash[i] << endl;
    }
    // Store frequencies of elements
    for (int i = 0; i < n - 1; i++) {
        hash[arr[i]]++;
        cout << hash[arr[i]] << "\t";
    }

    cout << endl;
    // Find the missing number
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    // Edge case handling (though problem guarantees a
    // solution)
    return -1;
}

/* Driver code */
int main()
{
    vector<int> arr = { 6, 2, 3, 5, 1};
    int n = 6;
    cout << missingNumber(n, arr);
}