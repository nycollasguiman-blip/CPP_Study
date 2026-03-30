#include<iostream>
using namespace std;

//Consertando os caracteres especiais
#include <windows.h> 

// Esse programa eu fiz uma mini cálculadora para testar o que vi no capítulo 3 


inline void keep_window_open() { char ch; cin>>ch; }

int main()
{

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    system("cls");

    cout << "Digite dois números:\n";
    double a;
    double b;
    cin >> a >> b;

    cout << "Para "<< a << " e " << b << ":\n";
    cout << "Soma: " << a+b << "\n"
            << "Subtração: " << a-b << "\n"
            << "Multiplicação: " << a*b << "\n"
            << "Divisão: " << a/b;
            
}

