#include<iostream>
using namespace std;

class MyClass {
    public: 
        MyClass(int i) { cout << i; }
        MyClass(const MyClass &t) { cout << "2"; }
};
int main()
{
    MyClass *t1, *t2;
    t1 = new MyClass(0);
    t2 = new MyClass(*t1);
    MyClass t3 = *t1;
    MyClass t4 = *t2;
    return 0;
}