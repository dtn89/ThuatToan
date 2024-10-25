#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee
{
    public:
        string Name;
        string Company;
        int Age;

        // Create contruction
        Employee(string Name, string Company, int Age)
        {
            this->Name = Name;
            this->Company = Company;
            this->Age = Age;
        }
};
int main()
{
    Employee employee1("Nam", "Bosch", 35);

    cout << employee1.Company << endl; 
    return 0;
}