
#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    int a;
    int sum = 0;
    cin>>n>>a;
    for(int i=0; i<n; i++){
        sum=sum+1/pow(cos(a),i);
    }
    cout<<sum;
}
