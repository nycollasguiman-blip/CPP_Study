// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa faz uma busca por um número de 1 até 100 que o usuário esteja pensando

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    int total_numbers = 100; // Total de números
    int bottom = 1; // Valor inicial do piso
    int top = total_numbers; // Valor inicial do teto
    int mean; // Para guardar a média entre piso e teto
    char answer; // Para guradar as respostas do usuário
    

    
    // Laço principal
    while(top != bottom)
    {
        mean = (top + bottom)/2;
        cout << "O seu número é maior que " << mean <<  "? (s: sim, n: não)\n";
        cin >> answer;

        // Afunilamento do piso e do teto até se encontrarem
        if (answer == 's')
        {
            bottom = mean + 1;
            cout << "Teto: " << top << "\tPiso: " <<bottom << "\n";
        }
        else if (answer == 'n')
        {
            top = mean;
            cout << "Teto: " << top << "\tPiso: " <<bottom << "\n";
        }
        else
        {
            cout << "Resposta inválida\n";
        }
        
        cout << "----------------------\n";
    }

    cout << "O seu número é " << top;
    cout << "\n----------------------\n";
}
