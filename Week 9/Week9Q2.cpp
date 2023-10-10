#include <iostream>
#include <iomanip>

int main() {
    std::cout<<std::setprecision(6)<<std::setfill('0');
    std::cout<<std::setw(8)<<(double)10/3;
    return 0;
}