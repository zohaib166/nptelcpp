#include<iostream>
using namespace std;

class Test {
public:
    virtual void f() = 0;
};
void Test::f() {
    cout << "Pure virtual function";
}
int main()
{
    Test t;
    Test *p = new Test();
    p->f();   
    return 0;
}