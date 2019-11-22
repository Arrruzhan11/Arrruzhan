#include <iostream>
using namespace std;
int main() {
    int n=20;
    for(int i=1; i<=n; i++){
        if(i%2==1){
        for(int j=1; j<=n; j++){
            cout<<1;
            }cout<<endl;
        } else {
        for(int j=1; j<=n; j++){
            cout<<i;
            }cout<<endl;
        }
    }
}
