#include<iostream>
#include<string>

using namespace std;

// ---------- Shallow Copy Class ----------
class ShallowCopy {
private:
    int* data;

public:
    ShallowCopy(int value) {
        data = new int;
        *data = value;
    }

    // Shallow copy: copies pointer, not data
    ShallowCopy(const ShallowCopy& other) {
        data = other.data;
    }

    void setValue(int value) {
        *data = value;
    }

    void show() {
        cout << "ShallowCopy Value: " << *data << ", Address: " << data << endl;
    }

    // ~ShallowCopy() {
    //     delete data;
    // }
};

// ---------- Deep Copy Class ----------
class DeepCopy {
private:
    int* data;

public:
    DeepCopy(int value) {
        data = new int;
        *data = value;
    }

    // Deep copy: allocates new memory and copies value
    DeepCopy(const DeepCopy& other) {
        data = new int;
        *data = *(other.data);
    }

    void setValue(int value) {
        *data = value;
    }

    void show() {
        cout << "DeepCopy Value: " << *data << ", Address: " << data << endl;
    }

    ~DeepCopy() {
        delete data;
    }
};

int main() {
    // Demonstrating Shallow Copy
    cout << "=== Shallow Copy ===" << endl;
    ShallowCopy s1(100);
    ShallowCopy s2 = s1;

    cout << "Before modifying s1:" << endl;
    s1.show();
    s2.show();

    s1.setValue(200);
    cout << "\nAfter modifying s1:" << endl;
    s1.show();
    s2.show(); // Affected due to shared pointer

    // Demonstrating Deep Copy
    cout << "\n=== Deep Copy ===" << endl;
    DeepCopy d1(300);
    DeepCopy d2 = d1;

    cout << "Before modifying d1:" << endl;
    d1.show();
    d2.show();

    d1.setValue(400);
    cout << "\nAfter modifying d1:" << endl;
    d1.show();
    d2.show(); // Unaffected due to independent memory

    return 0;
}
