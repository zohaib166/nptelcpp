#include <iostream>
#include <list>
#include <thread>
void addToList(std::list <char> &lc) {
    lc.push_back('C');
}

int main() {
    std::list <char> lc;
    for(int i=0; i<2; i++) {
        lc.push_back('A'+i);
    }

    std::thread t1 {std::ref(addToList), std::ref(lc)};
    t1.join();
    for(char c: lc) {
        std::cout << c << " ";
    }
    return 0;
}