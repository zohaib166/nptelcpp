#include<iostream>
using namespace std;

void evalEx(int i) {
    i==0? throw "zero": throw i;
}
int main()
{
    try {
        evalEx(0);
    } catch (int & e) {
        cout << "int ";
    } catch (float& e) {
        cout << "float ";
    } catch(double &e) {
        cout << "double ";
    } catch (const char *e) {
        cout<<"cstring ";
    } catch(...) {
        cout << "unknown ";
    }
    return 0;
}