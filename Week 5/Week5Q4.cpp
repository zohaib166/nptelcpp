#include<iostream>
using namespace std;
class square {
protected:
    int w;
public:
    square(int _w): w(_w) {}
    int area() {return w * w;}
};

class rectangle: public square {
    int h;
public:
    rectangle(int _w, int _h): square(_w),h(_h) {}
    int area() {return w*h;}
};
int main()
{
    rectangle *s = new rectangle(2,4);  
    cout << s->area();
    return 0;
}