#include<iostream>
using namespace std;
namespace name {
    class myClass {
        int a;
        public:
            myClass(int x):a(x) {}
            void print() {cout << a;}
    };
}
int main()
{
    name::myClass m(5);
    m.print();
    return 0;
}