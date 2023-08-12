#include<iostream>
using namespace std;
int data = 0;
namespace ns {
    int data = 2;
}

int main()
{
    using namespace ns;
    int data = 1;
    cout << ::data << " " << data << " " << ns::data;
    return 0;
}