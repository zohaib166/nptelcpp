#include<iostream>
using namespace std;

namespace Exceptions {
    class AEx {};
    class BEx: public AEx{};
    class CEx: public BEx{};
}

void evalEx() {
    try {
        throw Exceptions::CEx();
        throw Exceptions::BEx();
        throw Exceptions::AEx();
    } catch (Exceptions::BEx &e) {
        cout << "BEx ";
        throw;
    } catch (Exceptions::AEx &e) {
        cout << "BEx ";
    } catch (Exceptions::CEx &e) {
        cout << "CEx, ";
        throw 10;
    }
}
int main()
{
    try {
        evalEx();
    } catch (int &i) {
        cout << "int";
    } catch(...) {
        cout << "all";
    }
    return 0;
}