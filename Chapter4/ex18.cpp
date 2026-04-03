// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe os coeficientes da equação de segundo grau e soluciana

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Resolvendo a equação de segundo grau (ax^2 + bx + c = 0): \n";

    cout << "Digite a: ";
    double a;
    cin >> a;

    cout << "\nDigite b: ";
    double b;
    cin >> b;

    cout << "\nDigite c: ";
    double c;
    cin >> c;

    double rdelta = sqrt(pow(b,2) - 4*a*c);
    double x1 = (-b - rdelta)/(2*a);
    double x2 = (-b + rdelta)/(2*a);

    cout << "\nSoluções:";
    cout << "\nx1 = "<< x1;
    cout << "\nx2 = "<< x2;

    
}
