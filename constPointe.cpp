#include<iostream>

using namespace std;

int main(void)
{
    // Constant pointers
    double x1 = 11.1, x2 = 22.2;
    double* const p1 = &x1; // Khai bao con tro hang va khoi tao
    *p1 = 99.9;
    // p1 = &x2; // error: assignment of read-only variable 'p1'
    cout << *p1 << endl;

    // pointer to constant
    float z = 33.3f;
    const float* p2 = &z;
    // *p2 = 1; // error: assignment of read-only location '*p2'
    cout << *p2 << endl;

    // const pointer to const
    int m = 44, n = 55;
    const int* const p3 = &m;
    cout << *p3 << endl;

    return 0;
}