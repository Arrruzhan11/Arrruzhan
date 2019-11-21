#include <iostream>
using namespace std;
int main () {
    for (int i = 100; i < 999; i++)
        {
            if ((i % 10) + ((i - i % 10) / 10) == 237)
            {
                cout<<i;
            }
        } 
}