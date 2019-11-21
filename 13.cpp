#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double x=1;
    double a=0.1;
    double b=0.2;
    double y=1;
    double z=5;
    double result;
    result=pow(x*x+b, y/z)-(b*b*sin(x+a)*sin(x+a)*sin(x+a))/x;
    cout<<result;
    }