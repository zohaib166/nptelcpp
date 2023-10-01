#include<iostream>
using namespace std;

int x = 10;
struct operation1
{
    operation1(int val) : val_(val){}
    int& operator()() { std::cout << val_ << " "; return x; }
    int val_;
};

struct operation2
{
    operation2(int val) : val_(val){}
    int operator()() { std::cout << val_ << " "; return x; }
    int val_;
};

template <typename T>
auto wrapper(T& op) -> decltype(op()) {
//decltype(auto) wrapper(T& op) {
    return op();
}

int main()
{
    operation1 o1{1};
    operation2 o2{2};
    wrapper(o1) = 10;
    int i = wrapper(o2);
    return 0;
}