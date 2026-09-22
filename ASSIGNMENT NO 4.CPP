#include <iostream>
using namespace std;

class Book
{
public:
    string name;
    int price;

    // Default constructor
    Book()
    {
        name = "Unknown";
        price = 0;
    }

    // Parameterized constructor
    Book(string n, int p)
    {
        name = n;
        price = p;
    }

    void display()
    {
        cout << "Book Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1;
    Book b2("C++", 500);

    cout << "First Book:" << endl;
    b1.display();

    cout << "\nSecond Book:" << endl;
    b2.display();

    return 0;
}