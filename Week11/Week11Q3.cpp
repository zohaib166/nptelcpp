#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

void process(std::vector<std::string> &v) {
    struct cmp {
        bool operator()(std::string x, std::string y) {
            return x.length() > y.length();
        }
    };
    sort(v.begin(), v.end(), cmp());
}

int main() {
    std::vector<std::string> v {"orange", "banana", "apple", "kiwi"};
    process(v);
    for(auto it:v) {
        std::cout << it << " ";
    }
    return 0;
}