#include<iostream>
using namespace std;
class person
{
public:
string name;
int age;
int contact;
void displayPerson()
{
cout<<"Name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
cout<<"Contact:"<<contact<<endl;
}
};
class student:public person
{
public:
int rollno;
string branch;
void displayStudent()
{
cout<<"Rollno"<<rollno<<endl;
cout<<"Branch"<<branch<<endl;
}
};
int main()
{
student s1;
s1.name="Riya";
s1.age=18;
s1.contact=912367;
s1.rollno=14;
s1.branch="btech AIDS";
return 0;
}
