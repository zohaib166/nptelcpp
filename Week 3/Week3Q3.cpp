#include<iostream>
using namespace std;

class Private_Data {
    int x;
    void f1() {
        cout << "Within f1";
    }
    public:
        int y;
        void f2() {
            cout << "Within f2";
        }
};


int main()
{
    Private_Data t;
    //t.x = 1; //Error
    //t.f1(); //Error
    t.y = 2;
    t.f2();
    return 0;
}