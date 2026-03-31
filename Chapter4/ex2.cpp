// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa receve temperaturas e cálcula a média e a mediana;

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);
    
    vector<double> temps;
    double temp;
    int median;

    // Entradas
    while(cin >> temp)
    {
        temps.push_back(temp);
    }

    // Soma dos valores
    double sum = 0;
    for (int i = 0; i < temps.size(); ++i)
    {
        sum += temps[i];
    }

    // Ordena os os valores e os exibe 
    sort(temps.begin(), temps.end());
     for (int i = 0; i < temps.size(); ++i)
    {
        cout << temps[i] << " ";
    } 

    // Exibe a média
    cout << "\n\nMédia das temperaturas: " << sum/temps.size();

    // Cálcula a mediana corretemente
    if (temps.size()%2 == 0) // Se lista par
    {
        median = (temps[(temps.size()/2) - 1] + temps[temps.size()/2])/2 ;
        cout << "\nTemperatura mediana: " <<  median << endl;
    }
    else // Se lista impar
    {
        median = temps[temps.size()/2];
        cout << "\nTemperatura mediana: " <<  median << endl;
    }
    
}
