#include <iostream>
using namespace std;

int main()
{
  int a;
  int b;
  int c;
  cin>>a>>b>>c;
  if((a<5 && b<5) || (b<5 && c<5) || (a<5 && c<5)){
      cout<<"Yes";
      }else {cout<<"No";}
}