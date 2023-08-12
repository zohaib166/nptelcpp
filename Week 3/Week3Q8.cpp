#include<iostream>
#include<string>
using namespace std;

class Data {
    int _d = 0;
    public:
    int set_d(int d) const {
        _d = d;
    }
    int get_d() const {
        return _d;
    }
};
int main()
{
    const Data obj;
    obj.set_d(5);
    cout << obj.get_d();
    return 0;
}