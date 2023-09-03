#include<iostream>
using namespace std;
class B{public: virtual ~B(){}};
class D: public B{};
class DD: public B{};   
int main()
{
    B objA;
    D objB;
    B *pA = dynamic_cast<B*>(&objB);
    pA == NULL ? cout << "10 " : cout << "11 ";
    D *pB = dynamic_cast<D*>(pA);
    pB == NULL ? cout << "20 " : cout << "21 ";
    DD *pC = dynamic_cast<DD*>(new B);
    pC == NULL ? cout << "30 " : cout << "31 ";
    pC = dynamic_cast<DD*>(&objB); //this gives runtime error can never succeed
    pC == NULL ? cout << "40 " : cout << "41 ";
    return 0;
}