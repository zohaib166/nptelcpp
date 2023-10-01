#include <iostream>
#include <list>

int main() {
    std::list<int> li{10,20,30,40,50};
    int i=0;

    //auto &it or decltype((i)) will give result 20 40 60 80 100
    for(decltype((i)) it: li) {
        it*=2;
    }

    for(auto it = li.begin(); it!= li.end(); ++it) 
        std::cout << *it << " ";
}