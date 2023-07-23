#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s = "programming in modern C++";
    cout << s.size();
    //cout << strlen(s); //error
    cout << s.length();
    cout << strlen(s.c_str());
    return 0;
}