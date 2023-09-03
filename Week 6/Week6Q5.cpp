#include<iostream>
using namespace std;

class A{
public:
    virtual void f() { cout << "A::f() "; }
    void g() { cout << "A::g() "; }
    void h() { cout << "A::h() "; }
};

class B: public A {
public:
    void f() { cout << "B::f() "; }
    void g() { cout << "B::g() "; }
    void h() { cout << "B::h() "; }
};

class C:public B {
public:
    void f() { cout << "C::f() "; }
    void g() { cout << "C::g() "; }
    virtual void h() { cout << "C::h() "; }
};
int main()
{
    C cb;
    B &bb = cb;
    bb.f();
    bb.g();
    bb.h();
    return 0;
}