#include<iostream>
using namespace std;

class base {
protected:
    int t1;
};

class derived : public base {
public:
    int t2;
    int sum() { return t1+t2; }
};

int main()
{
    base b;
    derived d;
    b.t1 = 10;
    d.t1 = 20;
    d.t2 = 30;
    cout << d.sum();
    return 0;
}