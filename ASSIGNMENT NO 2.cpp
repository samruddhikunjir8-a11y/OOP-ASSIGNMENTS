#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollno;
    float marks;

    void showData()
    {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.name = "Riya";
    s.rollno =23 ;
    s.marks = 85.5;

    s.display();

    return 0;
}