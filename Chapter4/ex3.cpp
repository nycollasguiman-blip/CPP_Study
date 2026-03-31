// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe uma sequência de valores e cálcula a média, o maior, o menor e a soma deles

// Testando a sintaxe de função, não tinha escrito até o momento
double mean(vector<double> x)
{
    double sum = 0;
    for (int i = 0; i < x.size(); ++i)
    {
        sum += x[i];
    }

    return sum/x.size();
}

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    
    cout << "Digite as distâncias de cada parada entre duas cidades: \n";
    double distance;
    vector<double> distances;
    double sum = 0;

    // Recebe os valores
    while (cin >> distance)
    {
        distances.push_back(distance);
        sum += distance;
    }

    // Organiza os valores
    sort(distances.begin(), distances.end());

    // Exibe algumas estatísticas
    cout << "\nMenor distância: " << distances[0];
    cout << "\nMaior distância: " << distances[distances.size() - 1];
    cout << "\nMédia das distâncias: " << mean(distances);
    cout << "\nDistância total: " << sum;


}
