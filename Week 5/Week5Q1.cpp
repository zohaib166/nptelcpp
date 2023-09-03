#include<iostream>
using namespace std;

class ClassA {
protected:
    int i;
public:
    ClassA(int _i) :i(_i) {}
    void func() { cout << i << endl; }
};

class ClassB : public ClassA {
public:
    ClassB(int _i): ClassA(_i) {}
    void func(int x) { cout << i*x << endl; }
};

int main()
{
    ClassB iA(5);
    iA.func();
    return 0;
}