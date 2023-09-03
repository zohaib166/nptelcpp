#include<iostream>
using namespace std;

class ClassA{
public:
    ClassA() { cout << "1"; }
    ~ClassA() { cout << "2"; }
};

class ClassB: public ClassA {
public:
    ClassB() { cout << "3"; }
    virtual ~ClassB() { cout << "4"; }
};

class ClassC: public ClassB {
public:
    ClassC() { cout <<"5"; }
    ~ClassC() { cout << "6"; }
};
int main()
{
    ClassA *t1 = new ClassC();
    delete t1;
    return 0;
}