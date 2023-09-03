#include<iostream>
using namespace std;

int main()
{
    char c = 'z';
    int i=50;
    char *cp = &c;
    int *pd;
    c = static_cast<char>(i);
    i = static_cast<double>(c);
    //pd = static_cast<double*>(cp); //error
    //c = static_Cast<char>(&c); //error
    return 0;
}