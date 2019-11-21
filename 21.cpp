#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a;
    double b;
    double c;
    cin>>a>>b;
    c=sqrt(a*a+b*b);
    cout<<"Area:"<<a*b/2<<endl;
    cout<<"Perimetr:"<<a+b+c<<endl;
    cout<<"Hypoteuse:"<<c;
    }