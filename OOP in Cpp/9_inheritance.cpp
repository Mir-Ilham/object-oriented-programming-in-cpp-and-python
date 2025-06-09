#include<iostream>
#include<string>

using namespace std;

class Person {
protected:
    string name;

public:
    // Base class constructor
    Person(string n) {
        name = n;
        cout << "Person constructor called for " << name << endl;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
private:
    int id;

public:
    // Derived class constructor calls base class constructor using initializer list
    Student(string n, int i) : Person(n) {
        id = i;
        cout << "Student constructor called for ID: " << id << endl;
    }

    void displayStudent() {
        displayPerson(); // Call base class function
        cout << "Student ID: " << id << endl;
    }
};

int main() {
    Student s("Alice", 101);
    s.displayStudent();

    return 0;
}
