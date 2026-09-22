#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int rollNo;

    Student(string name, int age, int rollNo)
    {
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
    }

    void display()
    {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1("Reema", 18, 25);

    s1.display();

    return 0;
}