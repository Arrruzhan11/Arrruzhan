#include <iostream>
#include <cmath>
using namespace std;
int main() {
int sum = 0;
int n;
cin>>n;
for (int i = 1; i<= n; i++){
    sum=sum+(i*i);
}
cout<<sum;
return 0;
}
