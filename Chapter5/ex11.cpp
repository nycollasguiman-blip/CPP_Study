// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe um int e exibe um vetor com asequência de fibonnaci com número de elementos 
// igual ao inteiro recebido, esse programa faz diversos tratamentos de erros

class index_error{};
class int_explosion{};

vector<int> Fibonacci(int n){
    vector<int> fibo_numbers;

    // Lança erro do index
    if (n<=0) throw index_error();

    // Duas entradas já definidas
    if (n == 1) {
        fibo_numbers.push_back(1);
        return fibo_numbers;
    }
     if (n == 2) {
        fibo_numbers.push_back(1);
        fibo_numbers.push_back(1);
        return fibo_numbers;
    }

    // Calculo para as demais entradas
    fibo_numbers.push_back(1);
    fibo_numbers.push_back(1);
    for (int i = 0; i < n - 2; ++i)
    {
        fibo_numbers.push_back(fibo_numbers[i+1] + fibo_numbers[i]);
        if (fibo_numbers[i+2] < 0) throw int_explosion();
    }
    return fibo_numbers;
}

// Função exibe os elementos do vetor
void print_vector(vector<int> numbers)
{
    cout << "Definindo o primeiro e o segundo elementos com 1";
    cout << "\n[" << numbers[0];
    for (int i = 1; i < numbers.size(); ++i)
        cout << ", " << numbers[i];
    cout << "]";
}

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    try{
    cout << "Quantos números de Fibonacci?\n";
    int n;
    double double_n;
    cin >> double_n;

    // Testa se a entrada é um int
    n = narrow_cast<int>(double_n);

    // Cria, quarda e mostra valoes do vetor
    vector<int> fibo_numbers;
    fibo_numbers = Fibonacci(n);
    print_vector(fibo_numbers);

    }
    catch(index_error){
        cout << "Entrada inválida!";
    }
    catch(int_explosion){
        cout << "int não suporta valores tão altos";
    }
    catch(runtime_error){
        cout << "A entrada deve ser um inteiro";
    }
    catch(...){
        cout << "Algo deu errado";
    }

}
