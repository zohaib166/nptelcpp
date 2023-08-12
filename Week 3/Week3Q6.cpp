#include<iostream>
using namespace std;

class Test {
    public:
        Test() { cout << "0" << endl; }
        Test(int x = 0) { cout << "K" << endl; }
};
int main()
{
    //Test t1;  //error
    return 0;
}