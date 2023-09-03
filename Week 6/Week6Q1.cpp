#include<iostream>
using namespace std;

class Class1{
public:
    void fun1() { cout << "C1"; }
    virtual void fun2() { cout << "C2"; }
};

class Class2: public Class1 {
public:
    void fun1() { cout << "C3"; }
    void fun2() { cout << "C4"; }
};
int main()
{
    Class1 *t1 = new Class2();
    t1->fun1();
    t1->fun2();  
    return 0;
}