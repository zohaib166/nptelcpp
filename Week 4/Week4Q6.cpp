#include<iostream>
using namespace std;
int x = 1;
namespace ns {
    int x = 5;
}
int main()
{
    using ns::x;
    cout << x;
    return 0;
}