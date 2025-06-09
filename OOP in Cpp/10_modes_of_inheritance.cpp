#include<iostream>
#include<string>

using namespace std;

class Base {
public:
    int pub = 1;

protected:
    int prot = 2;

private:
    int priv = 3; // Not inherited, only accessible within Base
};

// --------- Public Inheritance ---------
class PublicDerived : public Base {
public:
    void show() {
        cout << "Public Inheritance:" << endl;
        cout << "Public: " << pub << endl;       // ✅ Accessible
        cout << "Protected: " << prot << endl;   // ✅ Accessible
        // cout << "Private: " << priv << endl;  // ❌ Not accessible
    }
};

// --------- Protected Inheritance ---------
class ProtectedDerived : protected Base {
public:
    void show() {
        cout << "\nProtected Inheritance:" << endl;
        cout << "Public: " << pub << endl;       // ✅ Becomes protected
        cout << "Protected: " << prot << endl;   // ✅ Remains protected
    }
};

// --------- Private Inheritance ---------
class PrivateDerived : private Base {
public:
    void show() {
        cout << "\nPrivate Inheritance:" << endl;
        cout << "Public: " << pub << endl;       // ✅ Becomes private
        cout << "Protected: " << prot << endl;   // ✅ Becomes private
    }
};

int main() {
    PublicDerived pubObj;
    pubObj.show();
    cout << "Accessing pub from main: " << pubObj.pub << endl; // ✅ Allowed

    ProtectedDerived protObj;
    protObj.show();
    // cout << protObj.pub; // ❌ Not accessible: became protected

    PrivateDerived privObj;
    privObj.show();
    // cout << privObj.pub; // ❌ Not accessible: became private

    return 0;
}
