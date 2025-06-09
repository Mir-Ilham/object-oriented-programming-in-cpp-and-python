#include<iostream>
#include<string>

using namespace std;

class Student {
private:
    string name;
    int id;

public:
    // Default constructor (Does not mandate definition because compiler defines)
    Student() {
        name = "Unknown";
        id = 0;
    }

    // Parameterized constructor
    Student(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Student s1;                 // Calls default constructor
    Student s2("Alice", 101);   // Calls parameterized constructor

    s1.display();
    s2.display();

    return 0;
}
