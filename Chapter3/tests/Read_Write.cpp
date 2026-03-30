//std_lib_facilities.h
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

// Esse programa pergunda o primeiro nome do usuário e escreve na tela "Hello (Nome)""

int main()
{
    cout << "Entre com o seu primeiro nome:\n";
    string first_name;
    cin >> first_name;
    cout << "Hello, " << first_name << "!\n";  
    keep_window_open();
    return 0;
}