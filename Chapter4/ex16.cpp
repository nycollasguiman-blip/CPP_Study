// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe uma série de números e exibe quantos têm de cada um e qual é o que  aparece mais
// vezes, eu me inspirei nos dicionários do python

// Função para exibir contagem
void print_dic(vector<vector<int>> n)
{
    int max = n[0][1];
    int max_key = n[0][0];

    if (n.size() == 0)
    {
        cout << "Não há valores";
        return ;
    }

    for (int i = 0; i < n.size(); i++)
    {
        cout << "Número de " << n[i][0] << "'s = " << n[i][1] << "\n";

        // Procura o que mais aparece
        if (max < n[i][1]) 
        {
            max_key = n[i][0];
            max = n[i][1];
        }
    }
    cout << "O número " << max_key << " é o que mais aparece, " << max << " vezes";

    
}
int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    // Dicionário: [[valor1, contagem1], [valor2, contagem2], [valor3, contagem3], ...]
    vector<vector<int>> numbers_freq;

    int number;
    int max;
    bool have_key = false;

    cout << "Digite alguns números inteiros: \n";

    while (cin >> number)
    {
        // Testa se o número já está no dicionário
        for (int i = 0; i < numbers_freq.size(); i++)
        {
            // Se estiver acrescenta 1 na sua contagem
            if (numbers_freq[i][0] == number)
            {
                numbers_freq[i][1] += 1;
                have_key = true;
                break;
            }
        }
            // Se não foi achado ele é adicioanado
            if (!have_key)     
                numbers_freq.push_back({number, 1});
        have_key = false;

    }

    print_dic(numbers_freq);
}
