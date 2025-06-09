#include<iostream>
#include<string>

using namespace std;

class Book {
private:
    string title;
    int pages;

public:
    // Parameterized constructor
    Book(string t, int p) {
        title = t;
        pages = p;
    }

    // Copy constructor (Does not mandate definition because compiler defines)
    Book(const Book &b) {
        title = b.title;
        pages = b.pages;
    }

    void setPage(int pages) {
        this->pages = pages;
    }

    void display() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b1("C++ Basics", 300);   // Original object
    Book b2 = b1;                 // Copy constructor is called here
    Book b3(b2);

    // b2.setPage(301);

    b1.display();
    b2.display();
    b3.display();

    return 0;
}
