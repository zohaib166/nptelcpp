#include<iostream>
using namespace std;

class A {
    static int x1;
    int x2 = 5;
public:
    void fun1() { cout << "f1" << endl; }
};

class B: public A {
    int d1 = 10;
};

int A::x1 = 0;

int main()
{
    B t1;
    cout << sizeof(t1) << endl; //static variable is neither part of object nor class
    return 0;
}