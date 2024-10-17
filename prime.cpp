#include <iostream>

using namespace std;

bool primecheck(int num)
{
    if (num == 1)
    {
        return false;
    }
    else if (num == 2)
    {
        return true;
    }
    else
    {
        for(int i = 2; i < num; i++)
        {
            if ((num % i) == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int num;
    cout << "Enter a number to prime check: " << endl;
    cin >> num;
    bool primeflag = primecheck(num);
    if(primeflag)
    {
        cout << "This number " << num << " is a prime" << endl;
    }
    else
    {
        cout << "This number " << num << " is not a prime" << endl;
    }
    return 0;
}