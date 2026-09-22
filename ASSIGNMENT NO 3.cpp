#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int id;
    string department;
    float salary;

    void showData()
    {
        cout << "Employee Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.name = "Renu";
    e.id = 506;
    e.department = "HR";
    e.salary = 50000;

    e.display();

    return 0;
}