#include<iostream>
#include<string>

using namespace std;

class Animal {
public:
    // Virtual function
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    Cat c;

    // Base class pointer pointing to derived class objects
    a = &d;
    a->sound();  // Calls Dog's version

    a = &c;
    a->sound();  // Calls Cat's version

    return 0;
}
