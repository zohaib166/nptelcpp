#include<iostream>
using namespace std;

class Base {
public:
    void f() { cout << "Base class"; }
};

class Derived: public Base {
public:
    void f() { cout << "Derived class"; }
};
int main()
{
    Derived obj;
    obj.Base::f();  
    return 0;
}