#include <iostream>
using namespace std;
#define MAXVAL(X,Y) (X>Y ? X:Y)

inline int maxval(int x, int y) {
    return x>y?x:y;
}

int main(){
    int x1 = 3, x2=4;
    cout << MAXVAL(++x1, ++x2) << " ";
    cout << maxval(++x1, ++x2) << " ";
    return 0;
}