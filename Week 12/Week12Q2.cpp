#include <iostream>
#include <thread>
#include <list>
#include <functional>

struct Stat {
    std::list<int>& iLst;
    int *sum, *avg;
    Stat(std::list<int> &il, int *s, int *a) : iLst{il}, sum(s), avg(a) {}
    void operator()() {
        int j=0;
        for(auto& i : iLst) {
            *sum += i;
            i = ++j;
        }
        *avg = *sum/j;
    }
};

void show(const std::list<int>& il) {
    for(auto i: il) {
        std::cout << i << " ";
    }
}

int main() {
    std::list<int> il {10, 20, 30};
    int a = 0, s = 0;
    std::thread t {(std::ref(il), &s, &a)};
    t.join();
    show(il);
    std::cout << s << " " << a;
    return 0;
}