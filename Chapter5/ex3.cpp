// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa é um aprimoramento do programa do ex2.cpp que recebe uma temperatura em graus Celsius e 
// converte para Kelvin

// Função que converte celsius para Kelvin
double ctok(double c)
{
    double k = c + 273.15;
    return k;
}

int main()
{
    // Limpando e consertando terminal
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

     // Recebe temperatura
    cout << "Celsius: ";
    double c;
    cin >>  c;

    // Converte para Kelvin
    double k = ctok(c);

    // Testa temperatura
    if (k < 0){
        cout << "Menor que o zero absoluto!!!";
        return 0;
    }

    // Exibe temperatura em kelvin
    cout << "Kelvin: "<< k << endl;
}
