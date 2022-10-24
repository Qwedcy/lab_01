#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string input;
    cout << "Введи будь-яке слово\n";
    cin >> input;
    cout << "Твоє слово: " + input;
}