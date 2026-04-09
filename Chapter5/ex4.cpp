// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa é uma variação do programa do ex3.cpp que recebe uma temperatura em graus Celsius e 
// converte para Kelvin

class Error_ABZero{};

double ctok(double c)
{
    double k = c + 273.15;
    if (k < 0) throw Error_ABZero();
    return k;
}

int main()
{

    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    try{
        cout << "Celsius: ";
        double c;
        cin >>  c;
        double k = ctok(c);
        cout << "Kelvin: "<< k << endl;
    }
    catch(Error_ABZero){
        cerr << "Menor que zero absoluto!"; 
    }
    catch(...){
        cerr << "Execeção!";
    }


    
 

    
}
