#include<iostream>
using namespace std;

template <class T>
T add(const T& a, const T& b) {
    return a+b;
}
int main()
{
    std::cout << add(10.5,20.5);
    return 0;
}