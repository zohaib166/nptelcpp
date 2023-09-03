#include<iostream>
using namespace std;

class Flower {
public:
    virtual void Petals() = 0;
};

class FlowerWColor: public Flower {
    void Petals() { cout << "Flower with colors"; }
};

class FlowerWOColor : public Flower {};
class Rose: public FlowerWColor {
public:
    void Petals() {  cout << "Rose Flower"; }
};
class Jasmine: public FlowerWOColor {
public:
    void Petals() { cout << "Jasmine Flower"; }
};

class Sunflower: public FlowerWColor {
public:
    void Petals() { cout << "Sunflower flower"; }
};
int main()
{
    Flower f;
    Rose r;
    FlowerWColor fw;
    FlowerWOColor fwo;
    Jasmine j;
    Sunflower s;
    return 0;
}