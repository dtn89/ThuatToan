#include <iostream>
#include <vector>
#include <array>
#include <string>

using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void *memcopy(char *str_scr, char *str_des, int len)
{

}

int main()
{
    int a = 10;
    int b = 12;
    swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}