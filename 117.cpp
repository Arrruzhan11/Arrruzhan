#include <iostream>
#pragma hdrstop
using namespace std;

#pragma argsused
int main(int argc, char* argv[])
{
   int n;
   int sum=0;
   do
    {
      cin >> n;
      sum=sum+n;
    }
   while (n != 0);
   system("pause");
   cout<<sum;
   return 0;
}
