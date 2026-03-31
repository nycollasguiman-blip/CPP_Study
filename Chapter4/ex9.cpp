// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa testa os limites dos tipos int e double com potências de 2

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Quantos quadradinhos? \n";
    int val;
    double sum = 1;
    cin >> val;


    cout << "\nCom 1 quadradinho: 1 grão\n";

    for (int i = 1; i < val; i++)
    {
        sum += pow(2,i);
        cout << "Com " << i+1 << " quadradinhos: " << sum << " grãos\n";

        if (sum < 0 )
        {
            cout << "Estrapolou o tamanho do tipo das váriaveis\n";
            break;
        }
            
    }
    
    int test;
    test = pow(2,31);
    cout << "Dos testes, para int: pow(2,31) - 1 = " << test - 1 << " --> Esse é o maior valor que um int guarda";
    cout << "\nDos testes, para int: pow(2,31) = " << test << " --> Como funciona por complemento de 2 o valor estoura";
    cout << "\nSe a váriavel soma for double aparentemente não tem um limite, mas colocando 1024 casas ele já considera inf grãos";
}
