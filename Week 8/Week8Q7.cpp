#include<iostream>
using namespace std;

template <class T, int N = 3>
void genericPrint(T arr[]) {
    for(int i=0; i < N; i++) {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {18,30,35,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    genericPrint<int, 4>(arr);
    return 0;
}