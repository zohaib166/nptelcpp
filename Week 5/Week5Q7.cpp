#include<iostream>
using namespace std;

class Base {
public:
    void print() { cout << "Class Base" << endl; }
};

class Derived: private Base {
public:
    Derived() { (new Base)->print(); }
};

int main()
{
    Derived t1;
    return 0;
}