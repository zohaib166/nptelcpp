#include <iostream>
#include <functional>

int fun(int i, int j, int k, const int& l) {
    return (i+j) - (k+l);
}

int main() {
    using namespace std::placeholders;
    int a = 10, b = 20;
    auto wf = std::bind(fun, _3, a, _1, std::cref(b));
    std::cout << wf(5,6,7) << " ";
    a = b = -10;
    std::cout<< wf(5,6,7);
    return 0;
}