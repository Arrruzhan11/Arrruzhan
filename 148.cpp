#include "stdafx.h"
#include "stdio.h"
#include "windows.h"
#include "conio.h"
#include "iostream"

int _tmain(int argc, _TCHAR* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    using namespace std;
    cout << "¬ведите текст: " << endl;
    char text;
    cin >> text;
    char alphabet[34];
    char letter;
    int index = 0;
    for (letter = 'а'; letter <= '€'; letter++)
    {
        alphabet[index] = letter;
        index++;
    }
    alphabet[index] = NULL;


    return 0;
}
