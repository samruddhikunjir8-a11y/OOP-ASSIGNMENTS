#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:
    void recordDetails()
    {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author name: ";
        cin >> author;

        cout << "Enter book price: ";
        cin >> price;
    }

    void displayDetails()
    {
        cout << "\nBook Details" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main()
{
    Book book1;

    book1.recordDetails();
    book1.displayDetails();

    return 0;
}#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:
    void recordDetails()
    {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author name: ";
        cin >> author;

        cout << "Enter book price: ";
        cin >> price;
    }

    void displayDetails()
    {
        cout << "\nBook Details" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main()
{
    Book book1;

    book1.recordDetails();
    book1.displayDetails();

    return 0;
}#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:
    void recordDetails()
    {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author name: ";
        cin >> author;

        cout << "Enter book price: ";
        cin >> price;
    }

    void displayDetails()
    {
        cout << "\nBook Details" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main()
{
    Book book1;

    book1.recordDetails();
    book1.displayDetails();

    return 0;
}