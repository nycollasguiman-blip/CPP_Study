// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa é igual ao 13! Ao aprimorar e polir o exercício 13 acabei resolvendo o 14 sem querer

// Função exibe os valores no vector
void print_vector(vector<int> x){

    if (x.size() == 0) cout << "[]\n";
    else{
        cout << "[" << x[0];
        for (int i = 1; i < x.size(); i++) 
            cout << ", "<< x[i];
        cout << "]";
    }
}

// Função que testa se é primo
vector<int> erastostenes(vector<int> n){
    int divisor;
    vector<int> result;

    // Averigua cada valor de numbers
    for (int i = 0; i < n.size(); ++i)
    {
        // Toma, em ordem, o valor como divisor
        divisor = n[i];

        // Testa se o divisor é zero
        if (divisor != 0)
        {
            // zera todos os valores divisíveis pelo divisor
            for (int j = i + 1; j < n.size(); j++)
            {   
                if (n[j]%divisor == 0)
                    n[j] = 0;
            }

            // Recolhe todos que não são zero
            for (int k = 0; k < n.size(); k++)
            {
                if (n[k] != 0)
                {
                    result.push_back(n[k]);
                }
            }
            
            // Mostra os valores remanescentes
            print_vector(result);
            cout << "\n";

            // Para impedir que devolva result vazio
            if (i == n.size() - 1)
                return result;

            // Esvazia result
            result.clear();
        }
    }
    
}

int main(){
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Você quer testar se um número é primo até qual valor? \n";

    // Testes são até o max
    int max;
    cin >> max;

    // Vetor dos primos
    vector<int> primes;

    //Vetor de números
    vector<int> numbers;
    for (int i = 2; i <= max; ++i)
        numbers.push_back(i);

    // Aplicando o crivo de Erastostenes
    primes = erastostenes(numbers);
}
