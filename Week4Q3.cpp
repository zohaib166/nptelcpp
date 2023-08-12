#include<iostream>
using namespace std;

class Test1{
    int id;
    public:
    Test1(int x):id(x) {
        cout << id << " ";
    }
    ~Test1() { cout << id << " "; }
    void fun() {
        static Test1 t2(5);
    }
};
int main()
{
    Test1 t1(1);
    t1.fun();
    return 0;
}