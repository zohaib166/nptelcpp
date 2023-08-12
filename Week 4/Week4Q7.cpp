#include<iostream>
using namespace std;

class Test {
   int  mutable x;
    public:
    Test(int _x):x(_x) {}
    void setx(int a) const {
        x = a;
    }
    void display() const {
        cout << x << endl;
    }
};
int main()
{
    const Test m(5);
    m.setx(0);
    m.display();
    return 0;
}