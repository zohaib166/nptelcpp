#include <iostream>
namespace ver1_0 {
    double divide(double n) {
        std::cout << "hi";
        return n/10;
    }
}

inline namespace ver1_1 {
    template <typename T>
    T divide(T n) {
        std::cout << "hello";
        return n/100;
    }
}

int main() {
    std::cout << ver1_0::divide(100.0) << " ";
    std::cout << ver1_1::divide(100) << " ";
    std::cout << divide(100.0);
    return 0;
}

