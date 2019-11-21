#include <iostream>
using namespace std;
int main () {
    int n;
    double s;
    double p;
    cin>>n;
    if(n=1){s=2;}
    else {s=2;
        p=2;
        for(int i=2; i<n; i++){
            p=p*2*i*(2*i-1)/(i-1);
            s=s+p;
        }
    }
    cout<<s;
}