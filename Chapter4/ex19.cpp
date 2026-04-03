// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe nomes com valores, organiza internamente eles em um dicionário, e exibe eles

void print_name_val(vector<string>  names_vec, vector<int> val_vec)
{
    for (int i = 0; i < names_vec.size(); i++)
        cout << names_vec[i] << " " << val_vec[i] << "\n";
}

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    cout << "Digite os pares 'nome valor': \n";

    string name;
    int val;
    bool erro = false;
    vector<string> names;
    vector<int> points;

    while (cin >> name >> val)
    {
        if (name == "Não")
            break;

        for (int i = 0; i < names.size(); i++)
        {
            if (names[i] == name)
            {
                cout << "ERRO: Você digitou nome repetido!!!!";
                erro = true;
                break;
            }
        }

        if (erro)
            break;
        names.push_back(name);
        points.push_back(val);
    }

    if (!erro)
    {
        cout << "\n========";
        cout << "\nExibindo\n";
        cout << "========\n";
        print_name_val(names, points);
    }

}
