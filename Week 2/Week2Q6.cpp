#include <iostream>
using namespace std;
int main() {
    int a= 2, *b;
    *b  = a;
    //next line is okay since a const pointer can point to a non const int
    const int *ptr = &a;
    //not okay!! since a const ptr once assigned to a cannot reassigned to b
    *ptr = *b;
    cout << *ptr;
    return 0;

}