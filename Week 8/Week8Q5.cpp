#include<iostream>
using namespace std;
template <typename T1=int, typename T2=char>
class Mapping {
    private:
    T1 x;
    T2 y;
    public:
    Mapping(T1 x_, T2 y_) {
        x = x_;
        y = y_;
    }
    void show() {
        cout << x << "->" << y << endl;
    }
};
int main()
{
    Mapping <char, double> p0('X', 4.5);
    Mapping <char> p1(65,66);
    Mapping <> p2(65,66);
    p0.show();
    p1.show();
    p2.show();
    return 0;
}