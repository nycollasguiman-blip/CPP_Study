// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa é um aprimoramento do programa do ex4.cpp que recebe uma temperatura em graus Celsius e 
// converte para Kelvin ou pega uma temperatura em Kelvin e converte para Celsius
class Error_ABZero{};
void ctok()
{
    cout << "Celsius: ";
    double c;
    cin >>  c;

    double k = c + 273.15;

    if (k < 0) throw Error_ABZero();

    cout << "Kelvin: "<< k << endl;
}

void ktoc()
{
    cout << "Kelvin: ";
    double k;
    cin >>  k;

    if (k < 0) throw Error_ABZero();

    double c = k - 273.15;

    cout << "Celsius: "<< c << endl;
}


int main()
{

    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    try{
        cout << "Digite uma opção: \na - Celsius para Kenvin \nb - Kelvin para Celsius \n\ns - sair\n\n"; 
        char option;
        cin >> option;

        while (option != 's')
        {
        cout << "\n========================\n";
        switch(option){
            case 'a':
                ctok();
                break;
            case 'b':
                ktoc();
                break;
        }
        cout << "========================\n";
        cout << "\na - Celsius para Kenvin \nb - Kelvin para Celsius \n\ns - sair\n\n";
        cin >> option;
        }
    }
    catch(Error_ABZero){
        cerr << "Menor que zero absoluto!"; 
    }
    catch(...){
        cerr << "Execeção!";
    }


    
 

    
}
