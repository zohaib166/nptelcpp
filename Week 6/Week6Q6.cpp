#include<iostream>
using namespace std;

class classA {
public:
    virtual void f() { cout << "A::f()"; }
};

class classB : public classA {
public:
    void f() { cout << "B::f()"; }
};

class classC : public classB {
public:
    void f() { cout << "C::f()"; }
};
int main()
{
    classC *t = new classC;
    t->classA::f();
    return 0;
}