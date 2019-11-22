#include <iostream>
#pragma hdrstop
using namespace std;

#pragma argsused
int main(int argc, char* argv[])
{
   int n;
   int count=0;
   do
    {
      cin >> n;
      if(n%2==0){count++;}
    }
   while (n != 0);
   system("pause");
   cout<<count;
   return 0;
}
