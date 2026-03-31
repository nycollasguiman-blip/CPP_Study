// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe um número e subtrai sucessivamente potências de 2 crescentes, quando o número
// ficar negativo é retornado o número de subtrações feitas que é equivalente ao número de quadrádinhos
// necessários.

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Quantos grãos de arroz serão pagos? \n";
    int val;
    int sum = 0;
    cin >> val;

    for (int i = 0; val > 0; i++)
    {
        val = val - pow(2,i);
        sum += pow(2,i);

        if (val < 0)
        {
            cout << "\nSerá necessário pelo menos " << i << " quadradinhos\n";

            cout << "\nTotal pelos quadradinhos: " << sum << "\n";
        }

    }
    
}
