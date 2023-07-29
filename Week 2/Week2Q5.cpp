#include <iostream>
using namespace std;

int main() {
    const int a = 5;
    int &b = a+1;
    b = a+b;
    cout << a<< " "<<b;
    return 0;
}