#include <iostream>
using namespace std;
int main() {
    int n;
    int m;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        if(i%2==1){
        for(int j=1; j<=m; j++){
            cout<<"AAABBB";
            }cout<<endl;
        }
        else {
            for(int j=1; j<=m; j++){
            cout<<"BBBAAA";
            }cout<<endl;
        }
        }

}
