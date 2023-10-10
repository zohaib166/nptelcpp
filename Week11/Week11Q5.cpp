#include <iostream>
#include <vector>

int main() {
    double sum = 0.0, avg = 0.0;
    auto stat = [&](std::vector<double> v) {
        for(auto it:v)
            sum+=it;
        return sum/v.size();
    };

    std::vector<double> vd {10.6, 20.4, 30.4, 40.2};
    avg = stat(vd);

    std::cout << "avg = " << avg << ", sum = " << sum;
    return 0;
}