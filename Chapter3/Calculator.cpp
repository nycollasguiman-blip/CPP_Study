#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdlib>

// Esse programa simplesmenta pergunda o nome e dois valores, depois mostra as 4 operações entre eles 

#include <windows.h> //Consertando os caracteres especiais

using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    system("cls");


    cout << "Digite o seu primeiro nome\n";

    string name;
    cin >> name;

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

