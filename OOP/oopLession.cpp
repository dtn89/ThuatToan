#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee
{
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string name)
        {
            this->Name = name;
        }
        string getName()
        {
            return Name;
        }
        void setCompany(string company)
        {
            this->Company = company;
        }
        string getCompany()
        {
            return Company;
        }
        void setAge(int age)
        {
            this->Age = age;
        }
        int getAge()
        {
            return Age;
        }
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
    employee1.setName("Nam Dang Trung");
    cout << employee1.getName() << endl;
    return 0;
}