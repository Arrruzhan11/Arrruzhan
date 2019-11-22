#include <iostream>
using namespace std;
int getTable (int i){
    for(int i=1; i<=10; i++){
    cout<<i<<"*"<<i<<"="<<i*i<<endl;
    }
    }
int main() {
    int n = 1;
    cout<<getTable(n);
    return 0;
}
