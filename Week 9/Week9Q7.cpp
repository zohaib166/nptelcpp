#include <iostream>
#include <algorithm>
#include <list>

int main() {
    char ca[] = {'t','r','i','a','n','g','l','e'};
    int len = sizeof(ca)/sizeof(*ca);
    std::list<char> lc(len);
    //copy(ca+3, ca+len, lc.begin());
    copy(&ca[3], &ca[len], lc.begin());
    for(std::list<char>::iterator it = lc.begin();it!=lc.end();++it) 
        std::cout << *it;
    return 0;
}