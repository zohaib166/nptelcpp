#include <iostream>
template <typename T>
class Data {
    private: T i_;
    public: 
    Data() {};
    Data(T i): i_(i){}
    Data(const Data&)=delete;
    Data& operator=(const Data&) = default;
    Data(Data&& ) = default;
};

int main() {
    Data<int> d1;
    Data<int> d2(30);
    Data<int> d3 = d2;
    Data<int> d4 = std::move(d2);
    d1 = std::move(d2);
}