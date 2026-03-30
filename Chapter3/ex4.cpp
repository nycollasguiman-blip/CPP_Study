// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa pega dois valores inteiros e faz algumas algumas operações entre eles

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Digite dois valores do tipo inteiro: \n";
    int val1, val2;
    cin >> val1 >> val2;

    if (val1 > val2) // Maior, menor ou iguais.
    {
        cout << val1 << " é o maior\n";
        cout << val2 << " é o menor\n";

    }
    else if (val1 < val2)
    {
        cout << val2 << " é o maior\n";
        cout << val1 << " é o menor\n"; 
    }
    else
    {
        cout << "Os dois valores são iguais\n";
    }

    cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n"; // Soma
    cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n"; // Subtração
    cout << "Média: " << " = " << (val1 + val2)/2 << "\n"; // Média

}
