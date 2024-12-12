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
void *memcopy(void *scr, void *des, int len)
{
    char *str_scr = (char *) scr;
    char *str_des = (char *) des;
    for(int i = 0; i < len; i++)
    {
        *str_des = *str_scr;
        *str_des++;
        *str_scr++;
    }
    return des;
}

int main()
{
    int a = 10;
    int b = 12;
    char college_01[50] = "Dang Thanh Phat - EAS";
    char college_02[50] = "Dang Trung Nam - EAE";
    memcopy(&college_01, &college_02, sizeof(college_01)-sizeof(college_01[0]));
    swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << college_01 << endl;
    cout << college_02 << endl;
    return 0;
}