#include<iostream>
using namespace std;

class classA {
    static int a;
    public:
    int get() {return a;}
    friend class classB;
};
int classA::a = 0;
class classB {
    int b;
    public:
    classB(int y): b(y) {}
    void print() {
        classA::a = 4;
        cout << b << " " << classA::a;
    }
};
int main()
{
    classB t2(5);
    t2.print();
    return 0;
}