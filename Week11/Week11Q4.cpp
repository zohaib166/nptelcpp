#include <iostream>
class data {
    public:
        data(){}
        explicit data(int i) : i_(i){}
    protected:
        int i_ { 0 };
};

class data_pair: public data {
    public:
        explicit data_pair(double j) : j_(j){}
        //data_pair(int i): data(i) {}
        using data::data;
        void show() {
            std::cout << "(" << i_ << ", " << j_<< ")" << " ";
        }
    protected:
        double j_ {0.0};
};

int main() {
    data_pair d1(10);
    data_pair d2(10.5);
    d1.show();
    d2.show();
}