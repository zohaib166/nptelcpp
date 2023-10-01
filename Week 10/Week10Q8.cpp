#include<iostream>

void show(int *ip) {}
template <typename Func, typename Param>
void call(Func fn, Param p) {
    fn(p);
}
int main()
{
    int i = 10;
    //call(show, &i);
    //call(show, i);
    //call(show, NULL);
    call(show, nullptr);
    return 0;
}