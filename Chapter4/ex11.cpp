// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa retorna os números primos de 0 até 100, eu estou testando maneiras mais elegantes
// de programar, encapsular e comentar

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
    for (int i = 0; i < x.size(); i++) 
        cout << x[i] << "\n";
}

int main(){
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    // Testes são até o max
    int max = 100;

    // Vetor dos primos
    vector<int> primes;

    // Testa e guarda os primos
    for (int i = 0; i <= max; ++i)
        if (is_prime(i)) primes.push_back(i);

    print_vector(primes);
}
