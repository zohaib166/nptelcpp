#include<iostream>
using namespace std;
class Point {
    int x,y;
    public:
    Point(int _x, int _y): x(_x), y(_y) { }
    Point(Point &c): x(c.x), y(c.y) { }
    void change(Point *new_c) { this = new_c; } //error
    void show() { cout << x << ", " << y << endl; }
};
int main()
{
    Point c1(10,20);
    Point c2(20,50);
    Point c3(c1);
    c3.change(&c2);
    c3.show();
    return 0;
}