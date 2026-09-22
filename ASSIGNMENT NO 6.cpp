#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int id;

    Employee()
    {
        name = "Amit";
        id = 101;
        cout << "Employee created" << endl;
    }

    ~Employee()
    {
        cout << "Employee removed" << endl;
    }
};

int main()
{
    Employee e1;

    cout << "Name: " << e1.name << endl;
    cout << "ID: " << e1.id << endl;

    return 0;
}