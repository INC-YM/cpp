#include <iostream>

using namespace std;

struct S{
    int a, b;
    int getS(){
        return a*b;
    }
};
int main(){
    S S1;

    S1.a = 2;
    S1.b = 3;

    cout << S1.getS();

    return 0;

}
