// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe um número inteiro e di se ele é par ou impar.
int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Entre com um valor inteiro:\t";
    int val;
    cin >> val;

    if (val%2 == 0)
    {
        cout << "\nÉ par.";
    }
    else
    {
        cout << "\nÉ impar.";
    }
}
