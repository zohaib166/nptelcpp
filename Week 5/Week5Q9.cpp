#include<iostream>
using namespace std;

class B{
    public:
    void print(){ cout<< "B ";}
};

class D: public B {
    public:
    void print() {cout << "D ";}
};
int main()
{
    B *a1 = new D();
    D *a2 = new D();

    a1->print();
    a2->print();
    return 0;
}