// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe o nome de um número, "dois" por exemplo, e retorna o número.

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Escreva o nome de algum número (0, 1, 2, 3, ou 4): \n";
    string val;
    cin >> val;

    cout << "\n";

    if (val == "zero")
    {
        cout << 0;
    }
    else if (val == "um")
    {
        cout << 1;
    }
        else if (val == "dois")
    {
        cout << 2;
    }
        else if (val == "três")
    {
        cout << 3;
    }
        else if (val == "quatro")
    {
        cout << 4;
    }
    else
    {
        cout << "Não conheço esse número.";
    }
}
