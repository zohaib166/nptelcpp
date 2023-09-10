#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

struct cmp {
    bool operator() (std::string s1, std::string s2) {
        return (s1.length() < s2.length());
    }
};

int main()
{
    std::vector<std::string> sVec{"deer", "cat", "rabbit", "sheep"};
    std::sort(sVec.begin(), sVec.end(), cmp()) ;
    for(int i=0;i<sVec.size();i++) {
        std::cout<<sVec[i] << " ";
    }
    return 0;
}