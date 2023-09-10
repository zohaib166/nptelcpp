#include<iostream>
using namespace std;

class Notification {
    public:
    void alert(const char* msg) {
        cout<<msg<<endl;
    }
};

void (Notification::*fp)(const char *);
int main()
{
    fp = &Notification::alert;
    return 0;
}