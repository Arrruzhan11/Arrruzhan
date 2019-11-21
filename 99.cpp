#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int d;
    for (int i=1000;i<=9999;i++){
        a = i/1000;
        b = (i%1000)/100;
        c = (i%100)/10;
        d = i%10;
        if (a!=b && b!=c && c!=d && d!=a && a!=c){
            cout<<a<<b<<c<<d<<endl;
        }

    }
return 0;
}