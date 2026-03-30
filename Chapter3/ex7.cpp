// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa pega três valores string e os coloca em ordem crescente apenas usando if
// e else. Por combinatória: 3 palavras --> 3! possibilidades = 6, repare que idêntico ao
// ex6.

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Digite três palavras: \n";
    string val1, val2, val3;
    cin >> val1 >> val2 >> val3;

    cout << "\nEm ordem crescente ficam (pela ASCII): ";
    if (val3 >= val2)
    {
        if (val2 >= val1)
        {
            cout << "["<< val1 << ", "<< val2 << ", " << val3 << "]";
        }
        else
        {
            if (val3 >= val1)
            {
                 cout << "["<< val2 << ", "<< val1 << ", " << val3 << "]";
            }
            else
            {
                 cout << "["<< val2 << ", "<< val3 << ", " <<  val1 << "]";
            }
        }
    }
    else
    {
        if (val3 >= val1)
        {
            cout << "["<< val1 << ", "<< val3 << ", " << val2 << "]";
        }
        else
        {
            if (val2 >= val1)
            {
                 cout << "["<< val3 << ", "<< val1 << ", " << val2 << "]";
            }
            else
            {
                 cout << "["<< val3 << ", "<< val2 << ", " << val1 << "]";
            }
        }
    }
   
}
