#include<iostream>
using namespace std;

class Base {
protected:
    int t1;
public:
    Base(int _t1): t1(_t1) {}
};

class Derived: protected Base {
protected:
    int t2;
public:
    Derived(int _t1, int _t2): t2(_t2), Base(_t1) {}
};

class ReDerived: public Derived
{
public:
    ReDerived(int _t1, int _t2): Derived(_t1, _t2)  {}
    void print() { cout << t1 << " " << t2; }
};


int main()
{
    ReDerived d(10,20);
    d.print();
    return 0;
}