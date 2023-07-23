#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "Welcome ";
    string str2 = "Students";
    //str1+=str2;
    str1.append(str2);
    cout << str1;
    return 0;
}