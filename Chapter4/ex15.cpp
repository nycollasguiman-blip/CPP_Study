// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa retorna o um número de primos de acordo com o que o usuário escolher

// Função que testa se é primo
bool is_prime(int n){
    if (n == 0) return false;
    else if (n == 1) return false;
    else{

    for (int i = 2; i <= n/2 ; i++)
        if (n%i == 0) return false;
    }
    return true;
}

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

int main(){
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Você quer quantos números primos? \n";

    // Testes são até o max
    int max;
    cin >> max;

    // Vetor dos primos
    vector<int> primes;

    int i = 1;
    while (max > 0)
    {
        if (is_prime(i))
        {
            max -= 1;
            primes.push_back(i);

        }
        i++;
    }
    

    print_vector(primes);
}
