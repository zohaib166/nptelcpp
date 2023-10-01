#include <iostream>
#include <iomanip>

long double operator"" _FT(long double n) {
    return n*12;
}

long double operator"" _IN(long double n) {
    return n;
}

int main() {
    long len = 6.0_FT+8.0_IN;

    std:: cout << len << "IN";
    return 0;
}