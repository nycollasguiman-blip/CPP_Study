// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe um operador e dois números, retorna o resultado da operação deles.

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Digite um operando e dois números (nessa ordem): \n";
    string operation;
    double val1, val2;
    cin >> operation >> val1 >> val2;

    cout << "\n" << val1 << " " << operation << " " << val2 << " = ";
    if (operation == "+")
    {
        cout << val1 + val2;
    }
    else if(operation == "-")
    {
        cout << val1 - val2;
    }
    else if(operation == "*")
    {
        cout << val1 * val2;
    }
    else if(operation == "/")
    {
        cout << val1 / val2;
    }
    else
    {
        cout << "\nNão conheço essa operação.";
    }
}
