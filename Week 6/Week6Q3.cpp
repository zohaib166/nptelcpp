#include<iostream>
using namespace std;

class A{
public:
    virtual void f() = 0;
};

class B : public A{
    double data1;
public:
    void f() { cout << "B"; }
};

class C: public B {
    double data2;
public:
    void f() { cout << "C"; }
};
int main()
{
    cout << sizeof(A) << " " << sizeof(B) << " " << sizeof(C);
    return 0;
}