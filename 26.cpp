#include <iostream>
using namespace std;
int main () {
    int x;
    int y;
    int temp;
    cin>>x>>y;
    temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y;
    }