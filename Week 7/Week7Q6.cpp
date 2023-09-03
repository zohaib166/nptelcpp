#include<iostream>
#include<typeinfo>
using namespace std;
class Base { public: virtual ~Base(){}};
class Derived : public Base {};

int main()
{
    Base b; Derived d;
    Derived *dp = &d;
    Base *bp = dp;    
    Derived *dpp = (Derived*)dp;
    cout << (typeid(dp).name() == typeid(bp).name()); //different pointer types
    cout << (typeid(*dp).name() == typeid(*bp).name()); //points to same object d
    cout << (typeid(bp).name() == typeid(dpp).name()); //different pointer types
    cout << (typeid(*bp).name() == typeid(*dpp).name()); //contains same object d
    cout << (typeid(*dp).name() == typeid(*dpp).name()); //they are same as one assigned to other in line 12
    return 0;
}