#include <iostream>
#include <memory>

void f(std::shared_ptr<char> cp) {
    std::shared_ptr<char> cp1(cp);
    std::cout << "rc= " << cp1.use_count() << " "; //here
}

int main() {
    std::shared_ptr<char> cp1 = std::make_shared<char>('A');
    {
        std::shared_ptr<char> cp2(cp1);
        std::cout << "rc= " << cp1.use_count() << " "; //here
    }
    std::shared_ptr<char> cp3(cp1);
    f(cp3);

    std::cout << "rc= " << cp1.use_count() << " "; //here

    cp3.reset(new char('B'));
    std::cout << "rc= " << cp1.use_count(); //here

    return 0;
}