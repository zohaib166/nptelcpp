#include<iostream>
using namespace std;
class statC {
    static double d = 9.81; //Error: non const static element cannot be initialized in class
    public:
        void display() {
            cout << d << endl;
        }
};


int main()
{
    statC s;
    s.display();
    return 0;
}