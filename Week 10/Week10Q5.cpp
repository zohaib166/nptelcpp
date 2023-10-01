#include <iostream>
#include <vector>
#include <initializer_list>

template <typename T>
class Numbers {
    public:
    Numbers() {std::cout << "cont-1 "; }
    Numbers(int n) {std::cout << "cont-2 "; }
    Numbers(std::initializer_list<int> elems) { std::cout << "cont-3 "; }
    Numbers(int n, std::initializer_list<int> elems) { std::cout << "cont-4 "; }
};

int main() {
    Numbers <int> n1(10);
    Numbers <int> n2({10, 20, 30});
    Numbers <int> n3{10, 20, 30};
    Numbers <int> n4 = {10, 20, 30};
    Numbers <int> n5(10, {10,20,30});
}