#include <iostream>
using namespace std;
struct complex {
    int re, im;
    void show() {
        cout << re << " +i" << im;
    }
};

complex operator-(complex &c1, complex &c2) {
    c2.re = c1.re - c2.re;
    c2.im = c1.im - c2.im;
}

int main() {
    struct complex c1 = {2,5}, c2{3,-2};
    struct complex t = c1 - c2;
    t.show();
    return 0;
    
}