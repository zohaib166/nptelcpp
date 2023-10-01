#include <iostream>
constexpr int f2(const int i) {
    return i+10;
}

void f1(const int i) {
    constexpr int n = 20;
    constexpr int c1 = n+30;
    constexpr int c2 = n+c1;
    //constexpr int c3 = n+i; //error
    //constexpr int c4 = n+f2(i); //error
}

int main() {
    f1(10);
    return 0;
}