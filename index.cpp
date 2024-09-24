#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float a;
    cout<<"Введи радіан ";
    cin>>a;
    float Z1=(cos(a)+sin(a))/(cos(a)-sin(a));
    cout<<"Z1 = "<<Z1<<endl;
    float Z2=tan(2*a)+(1/cos(2*a));
    cout<<"Z2 = "<<Z2;
}
