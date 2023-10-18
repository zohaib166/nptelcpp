#include <iostream>

template <typename T>
class SmartPtr {
    private:
        T* pointee_;
    public:
        explicit SmartPtr(T* pointee): pointee_(pointee) {}
        ~SmartPtr() { delete pointee_; }
        T& operator *() const { return *pointee_; }
        T* operator ->() const { return pointee_; }
        operator T*() { return pointee_; }
        operator void* () { return pointee_; }
};

void incr(char* p) { ++*p; }

int main() {
    SmartPtr <char> p(new char('A'));
    std::cout << *p << " ";
    incr(p);
    std::cout << *p;
    delete p;
    return 0;
}