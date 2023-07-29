#include <iostream>
using namespace std;
char fun(int a, char b) {
    char c = a+b;
    return c;
}

char fun(char a, int b) {
    char c = a-b;
    return c;
}

int main()
{
    cout << fun(100,10);
    return 0;
}