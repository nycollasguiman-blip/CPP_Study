// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa é similar a um já feito nesse mesmo capitulo, o ex5.cpp, mas agora usando 
// uma função auxiliar para pegar qualquer entrada em string e transformar para decimal.

int str_to_decimal(string name)
{
     vector<string> numbers_str;

    numbers_str.push_back("zero");
    numbers_str.push_back("um");
    numbers_str.push_back("dois");
    numbers_str.push_back("três");
    numbers_str.push_back("quatro");
    numbers_str.push_back("cinco");
    numbers_str.push_back("seis");
    numbers_str.push_back("sete");
    numbers_str.push_back("oito");
    numbers_str.push_back("nove");
    numbers_str.push_back("0");
    numbers_str.push_back("1");
    numbers_str.push_back("2");
    numbers_str.push_back("3");
    numbers_str.push_back("4");
    numbers_str.push_back("5");
    numbers_str.push_back("6");
    numbers_str.push_back("7");
    numbers_str.push_back("8");
    numbers_str.push_back("9");

    for (int i = 0; i < numbers_str.size(); ++i)
    {
        if (i < 10)
        {
            if (name == numbers_str[i]) 
            {
                return i;
            }
        }
        else
        {
            if (name == numbers_str[i]) 
            {
                return i - 11;
            }
        }
    }
    cout << "\nNúmero não detectado\n";
}

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);


   

    cout << "Digite dois números, de um dígito, e uma operação separados por espaço: \n";
    string val1_str, val2_str, oper_str;
    double val1, val2, answer;
    char oper_char;
    cin >> val1_str >> val2_str >> oper_char;

    val1 = str_to_decimal(val1_str);
    val2 = str_to_decimal(val2_str);

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
        default:
            cout << "\nOperação não detectada\n"
    }
    // Saída
    cout << "A " << oper_str << " de " << val1 << " e " << val2 << " é " << answer; 

}
