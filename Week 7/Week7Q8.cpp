#include<iostream>
using namespace std;

class Base {
    public:
    virtual void f() {
        cout << "B::f() ";
    }
};
class Derived: public Base {
    public:
    virtual void f(){
        cout << "D::f() ";
    }
};

int main()
{
    Base obA;
    Derived obB;

    Base &ra1 = static_cast<Base&>(obB);
    ra1.f();
    Derived &rb1 = static_cast<Derived&>(obA);
    rb1.f();
    Base &ra2 = dynamic_cast<Base&>(obB);
    ra2.f();
    Derived &rb2 = dynamic_cast<Derived&>(obA); //fails in runtime
    rb2.f();    
    return 0;
}