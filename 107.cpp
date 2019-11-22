#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for (int i=10; i>=1; i--){
        for(int j=i; j>=1; j--){
        cout<<i<<" ";
         sum=sum+i;

        }cout<<endl;
        }
        cout<<endl;
        cout<<sum;


    }
