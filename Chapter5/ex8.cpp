// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa retorna a soma dos primeiros valores de um vetor, o programa recebe quantos devem ser
// somados e a sequência de valores, ele faz o tratamento dos erros

class Error_length{};

double sum_numbers(vector<double> numbers, int amount){
    if (numbers.size() < amount) throw Error_length();

    int sum = 0;

    for(int i = 0; i < amount; ++i)
        sum += numbers[i];

    return sum;
}
int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    try{
        cout << "Quantos números você quer somar? \n";
        int n;
        cin >> n;

        cout << "\nDigite uma sequência de números: \n";
        vector<double> sequence;
        double number;

        while(cin >> number)
            sequence.push_back(number);
        
        int result = sum_numbers(sequence, n);

        cout << "\nSomando os " << n << " primeiros o resultado é: " << result;

    }
    catch(Error_length){
        cout << "\nTamanho do vetor é menor que a quantidade que quer somar.";
    }
    catch(...){
        cout << "\nOcorreu alguma exceção.";
    }
    return 0;
}
