#include<iostream>
using namespace std;
class A{
    int x,y;
};

class B{
protected:
    int z;
public:
    void f() { cout << "B::f()"; }
};

class C: public A, public B {
    A obj1;
};

int main()
{
    //size of A = 8, size of B = 4, size of obj of A = 8 (8+8+4=20)
    cout << sizeof(C);
    return 0;
}