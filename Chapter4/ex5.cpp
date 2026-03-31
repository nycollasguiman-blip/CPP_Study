// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa é similar a um já feito, mas agora usando switch para treinar a sintaxe

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Digite dois números e uma operação separados por espaço: \n";
    double val1, val2, answer;
    string oper_str;
    char oper_char;
    cin >> val1 >> val2 >> oper_char;

    // Ação para cada caso
    switch(oper_char)
    {
        case '+':
            oper_str = "soma";
            answer = val1 + val2;
            break;
        case '-':
            oper_str = "subtração";
            answer = val1 - val2;
            break;
        case '*':
            oper_str = "multiplicação";
            answer = val1 * val2;
            break;
        case '/':
            oper_str = "divisão";
            answer = val1 / val2;
            break;  
    }
    // Saída
    cout << "A " << oper_str << " de " << val1 << " e " << val2 << " é " << answer; 

}
