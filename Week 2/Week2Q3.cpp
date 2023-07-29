#include <iostream>
using namespace std;
int main()
{
    int i;
    const int i1 = 2;
    const int i2 = i1;
    i2 = X+5; //error
    i=i1;
    i1 = 4+5; //error
    return 0;
}