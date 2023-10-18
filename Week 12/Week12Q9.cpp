#include <iostream>
#include <future>
#include <list>

struct Prod {
    Prod(const std::list<int>& dl) : dl_(dl) {}
    double operator()() {
        int p = 1;
        for(int it:dl_) {
            p *= it;
        }
        return p;
    }

    std::list<int> dl_;
};

double callProd(const std::list<int>& dl) {
    auto as = std::async(Prod(dl));
    return as.get();
}

int main() {
    std::list <int> dLi {2,4,6,2,5};
    std::cout << callProd(dLi);
    return 0;
}

