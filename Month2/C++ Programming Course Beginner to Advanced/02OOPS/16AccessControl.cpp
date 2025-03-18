/*      public      protected       private
--------------------------------------------
Same    Yes         Yes             Yes
class
-------------------------------------------
Derived Yes         Yes             No
class
-------------------------------------------
Outside Yes         No              No
class

✅ A Derived Class Can Access
✔ Public & Protected member variables/functions.
✔ Public functions of base class.
✔ Protected functions of base class.
✔ Base class constructor (only via derived class constructor).

❌ A Derived Class Cannot Access
❌ Private members of base class.
❌ Private functions of base class.
❌ Base class constructors directly (can only call them from derived class).


*/
#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 10;  // ❌ Not accessible in derived class

protected:
    int protectedVar = 20; // ✅ Accessible in derived class

public:
    int publicVar = 30; // ✅ Accessible in derived class

    void showBase() { // ✅ Public function (can be accessed)
        cout << "Base class function" << endl;
    }

protected:
    void protectedFunction() { // ✅ Accessible in derived class
        cout << "Protected function from Base" << endl;
    }

public:
    Base() { // ✅ Can be called in Derived Constructor
        cout << "Base class constructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;

        // privateVar = 50;  ❌ Not accessible (private)
        protectedVar = 60;  // ✅ Accessible (protected)
        publicVar = 70;     // ✅ Accessible (public)

        protectedFunction(); // ✅ Accessible (protected)
        showBase();         // ✅ Accessible (public)
    }
};

int main() {
    Derived obj;
    obj.publicVar = 100; // ✅ Allowed
    // obj.protectedVar = 200; ❌ Not allowed (protected, can't be accessed outside class)
    // obj.privateVar = 300; ❌ Not allowed (private, not inherited)
    obj.showBase(); // ✅ Allowed
    // obj.protectedFunction(); ❌ Not allowed (protected, can't be accessed outside)

    return 0;
}
