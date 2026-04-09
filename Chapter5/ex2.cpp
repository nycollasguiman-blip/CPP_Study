// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa é uma correção de um programa dado que recebe uma temperatura em graus Celsius e converte
// para Kelvin

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
    cout << "Celsius:";
    double c;
    cin >>  c;

    // Converte para Kelvin
    double k = ctok(c);

    // Exibe em Kelvin
    cout << "Kelvin: "<< k << endl;
}
