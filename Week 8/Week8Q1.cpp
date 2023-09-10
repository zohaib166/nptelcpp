#include<iostream>
using namespace std;

class AEx {};
class BEx: public AEx{};
class CEx: public BEx{};
void evalEx(int i) {
    if(i==0) {
        throw CEx();
    } else if(i<0) {
        throw BEx();
    } else {
        throw AEx();
    }
}
int main()
{
    try
    {
        evalEx(-5);
        evalEx(5);
        evalEx(0);
    }
    catch(int &i)
    {
        cout << "int";
    } 
    catch(...) {
        cout<<"all";
    }
    catch(BEx &e){ // masked by default handler
        cout << "BEx ";
    }
    
    return 0;
}