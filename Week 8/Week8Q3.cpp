#include<iostream>
using namespace std;

class AEx { 
    public: 
    virtual void printEx() { 
        cout << "AEx "; 
    }
};

class BEx: public AEx {
    public:
    void printEx() { 
        cout << "BEx "; 
    }
};

class CEx: public BEx {
    public:
    void printEx() { 
        cout << "CEx "; 
    }
};

void evalEx(int i) {
    try {
        if(i==0) {
            throw CEx();
        } else if(i<0) {
            throw BEx();
        } else {
            throw AEx();
        }
    } catch (BEx &e) {
        e.printEx();
    } catch (AEx &e) {
        e.printEx();
    } catch (CEx &e) {
        e.printEx();
    } catch(...) {
        cout << "all";
    }
}

int main()
{
    evalEx(-5);
    evalEx(5);
    evalEx(0);
    return 0;
}