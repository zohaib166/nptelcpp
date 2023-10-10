#include <iostream>
template <typename T> T pi = T(22L)/7;

int main() {
    pi<int> = 100;
    auto r1 = [] (auto(deg)) { return pi<decltype(deg)> * deg / 180; }(360);
    auto r2 = [] (auto(deg)) { return pi<double> * deg / 180; }(360);
    auto r3 = [] (auto(deg)) { return pi<decltype(deg)> * deg / 180; }(360.0);
    auto r4 = [] (auto(deg)) { return pi<int> * deg / 180; }(360.0);
    std::cout << r1 << ", " << r2 << ", " << r3 << ", " << r4;
}
