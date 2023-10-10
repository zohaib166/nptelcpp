#include <iostream>
#include <list>

template <typename T1>
class Reftype {
    public:
        void f1(T1&& n) {}

        template <typename T2>
        void f2(T2&& n) {}

        template <typename T3>
        void f3(std::list<T3>&& n);

    private:
        auto&& n;
};