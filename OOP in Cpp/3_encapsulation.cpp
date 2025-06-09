#include<iostream>
#include<string>

using namespace std;

class Person {
private:
    // Private data member: not accessible directly outside the class
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setAge(int a) {
        if (a >= 0) {
            age = a;
        } else {
            cout << "Age cannot be negative!" << endl;
        }
    }

    int getAge() {
        return age;
    }
};

int main() {
    Person p;

    p.setName("Alice");
    p.setAge(25);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}
