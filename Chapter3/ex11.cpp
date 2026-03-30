// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa serve para ver saídas noterminal relacionadas a erros por nomes inválidos

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Digite respectivamente, separados por espaços, quantas pennies, níquels, dimes, quartos, meios-dólar e dólar você tem: \n";
    int p, n, di, q, md, d;
    cin >> p >> n >> di >> q >> md >> d;

    cout << "\nVocê têm:\n";

    if (p > 1)
    {
         cout << p <<" pennies\n";
    }
    else
    {
         cout << p <<" pennie\n";
    }

    if (n > 1)
    {
         cout << n <<" níquels\n";
    }
    else
    {
         cout << n <<" níquel\n";
    }

    if (di > 1)
    {
        cout << di <<" dimes\n";
    }
    else
    {
        cout << di <<" dime\n";
    }

    if (q > 1)
    {
        cout << q <<" quartos\n";
    }
    else
    {
        cout << q <<" quarto\n";
    }

    if (md > 1)
    {
        cout << md <<" meio-dólares\n";
    }
    else
    {
        cout << md <<" meio-dólar\n";
    }
    if (d > 1)
    {
        cout << d <<" dólares\n";
    }
    else
    {
        cout << d <<" dólar\n";
    }
    

    double total;
    total = p + n*5 + di*10 + q*25 + md*50 + d*100;
    cout << "\nTotal de: " <<  total << " centavos\n";
    cout << "Isso equivale a U$"  << total/100;




}
