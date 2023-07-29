#include <iostream>
using namespace std;
int &func(int &i) {
    return i = i+5;
}
int main() {
    int x =1,y = 2;
    int &z = func(x);
    cout << x << " " << z << " ";
    func(x+1) = y; //cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    cout << x << " " << z;
    return 0;
}   