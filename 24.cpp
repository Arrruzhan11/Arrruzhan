#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double x;
    double y;
    double z;
    cin>>x>>y>>z;
    for(int i=0; i<x; i++){
        z=z+((z+3)*(y/100));
    }
    cout<<z;
    }