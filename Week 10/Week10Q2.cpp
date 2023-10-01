#include <iostream>

int main() {
    int n = 10;

    int &i1 = n;
    const int &i2 = 10;

    auto x1 = i1;
    auto &x2 = i2;

    decltype(i1) x3 = i1;
    decltype(i2) x4 = i1;

    ++x1;
    //++x2; //error
    ++x3;
    //++x4; //error
}
