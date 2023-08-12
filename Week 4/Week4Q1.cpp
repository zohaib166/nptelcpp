#include<iostream>
using namespace std;
class Student {
    string name = "Raj";
    public:
        friend void show(const Student&);
        //void friend show(const Student&);
};

void show(const Student &t) {
    cout << "Hello " << t.name;
}
int main()
{
    Student t;
    show(t);
    return 0;
}