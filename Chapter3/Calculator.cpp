#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
    system("cls");
    cout << "Digite o seu primeiro nome\n";

    string name;
    cin >> name;

    cout << "Digite dois números:\n";
    int a;
    int b;
    cin >> a >> b;

    cout << "Para "<< a << " e " << b << ":\n";
    cout << "Soma: " << a+b << "\n"
            << "Subtração: " << a-b << "\n"
            << "Multiplicação: " << a*b << "\n"
            << "Divisão: " << (double)a/b;
            
}

