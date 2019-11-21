#include <iostream>
using namespace std;
int main () {
    double n=7;
    double sum=0;
    for(double i=2; i<n; i++){
        sum=sum+i/(i+1);
    }
    cout<<sum;
}