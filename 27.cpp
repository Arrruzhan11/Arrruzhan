#include <iostream>
using namespace std;
int main () {
    int a;
    int b;
    int c;
    int temp1;
    int temp2;
    int temp3;
    cin>>a>>b>>c;
    temp1=a;
    a=a+b;
    temp2=b;
    b=c-a;
    temp3=c;
    c=temp1+temp2+c;
    cout<<a<<" "<<b<<" "<<c;
    }