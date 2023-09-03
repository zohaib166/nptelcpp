#include<iostream>
using namespace std;

class Base {
public:
    virtual void fun() {}
};

class Derived : public Base {
public:
    void fun(double i) {}
};

int main()
{
    Derived t1;
    Base *t1 = new Derived();
    t1.fun();
    t1.fun(3.14);
    t2->fun();
    t2->fun(9.81);
    return 0;
}