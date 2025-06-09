#include<iostream>
#include<string>

using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    Employee(string name, int id) {
        this->name = name; // 'this->name' refers to the class member
        this->id = id;     // 'id' is the constructor parameter
    }

    void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Employee e("Bob", 501);
    e.display();

    return 0;
}
