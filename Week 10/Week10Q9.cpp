#include <iostream>
#include <utility>

using namespace std;

class number {
    public:
        number(const int& i = 0): i_(i) {}
        number(const number& ob) {
            cout << "number-cp-ctor" << " ";
        }
        number(number&& ob) noexcept {
            cout << "number-mv-ctor" << " ";
        }
    private:
        int i_;

};

class sp_number: public number {
    public:
        sp_number(const int& i): number(i) {}
        sp_number(const sp_number& ob): number(ob) {
            cout << "spnumber-cp-ctor" << " ";
        }
        sp_number(sp_number&& ob) noexcept: number(ob) {
            cout << "spnumber-mv-ctor" << " ";
        }
};

int main() {
    sp_number obj1(100);
    sp_number obj2(obj1);
    sp_number obj3(std::move(obj1));
    return 0;
}