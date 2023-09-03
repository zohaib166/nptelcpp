#include<iostream>
using namespace std;

double incr(double *ptr) {
    return (*ptr)++;
}

int main()
{
    double val = 3.14;
    const double *ptr = &val;
    val = incr(const_cast<double*>(ptr));   //stripped away const-ness
    cout << val;
    return 0;
}