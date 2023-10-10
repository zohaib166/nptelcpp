#include <iostream>
#include <numeric>
#include <list>
#include <vector>

struct add {
    int operator() (int i, int j) {return i+j;}
};

struct multi {
    int operator() (int i, int j) {return i*j;}
};

int main() {
    std::list<int> li {4,5,6};
    std::vector<int> vi {7,8,9};
    int result = inner_product(li.begin(), li.end(), vi.begin(), 0.0, add(), multi()); 
    
    std::cout << result;
    return 0;
}