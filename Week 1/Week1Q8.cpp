#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int iarr[] = {10,20,50,40,10,50};
    rotate(&iarr[0], &iarr[2], &iarr[6]);
    remove(&iarr[0], &iarr[6], 10);
    for(int i=0; i<4; ++i) 
        cout<<iarr[i]<<" ";
    return 0;
}