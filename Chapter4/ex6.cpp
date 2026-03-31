// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe um número em dicimal e retorna o seu nome em string, também recebe uma
// string do nome do número e retorna o número em decimal.

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    // Vetor com os nomes
    vector<string> numbers_str;

    numbers_str.push_back("zero");
    numbers_str.push_back("um");
    numbers_str.push_back("dois");
    numbers_str.push_back("três");
    numbers_str.push_back("quatro");
    numbers_str.push_back("cinco");
    numbers_str.push_back("seis");
    numbers_str.push_back("sete");
    numbers_str.push_back("oito");
    numbers_str.push_back("nove");

    // Saída
    cout << "----------------------------\n";

    cout << "Digite um número de 0 a 9: \n";
    int number;
    cin >> number;
    cout << "" << numbers_str[number] << "\n";

    cout << "----------------------------\n";

    cout << "Escreva um número de zero a nove: \n";
    string number_str;
    cin >> number_str;

    for (int i = 0; i < numbers_str.size(); ++i)
    {
        if (numbers_str[i] == number_str)
        {
            cout << "" << i << "\n";
        }
    }

    cout << "----------------------------\n";



}
