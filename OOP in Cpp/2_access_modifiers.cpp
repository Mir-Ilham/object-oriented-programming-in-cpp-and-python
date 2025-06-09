#include<iostream>
#include<string>

using namespace std;

class Demo {
private:
    // private: Accessible only within the class
    int privateVar = 1;

protected:
    // protected: Accessible within the class and its derived classes
    int protectedVar = 2;

public:
    // public: Accessible from anywhere
    int publicVar = 3;

    void showData() {
        cout << "Private: " << privateVar << endl;
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << publicVar << endl;
    }
};

int main() {
    Demo obj;
    // obj.privateVar = 10;     // Error: private member not accessible
    // obj.protectedVar = 20;   // Error: protected member not accessible
    obj.publicVar = 30;         // Public member is accessible

    obj.showData(); // Can access all members inside the class

    return 0;
}
