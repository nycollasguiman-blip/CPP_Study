// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe uma série de strings e exibe quantas têm de cada uma e qual é a que aparece mais
// vezes, a solução foi uma adaptação do ex16

// Função para exibir contagem
void print_dic(vector<string> str_vec, vector<int> freq_vec)
{
    int max = freq_vec[0];
    string max_key = str_vec[0];

    if (str_vec.size() == 0)
    {
        cout << "Não há strings";
        return ;
    }

    for (int i = 0; i < str_vec.size(); i++)
    {
        cout << "Número de '" << str_vec[i] << "' = " << freq_vec[i] << "\n";

        // Procura o que mais aparece
        if (max < freq_vec[i]) 
        {
            max_key = str_vec[i];
            max = freq_vec[i];
        }
    }
    cout << "A string '" << max_key << "' é a que mais aparece, " << max << " vezes";

    
}
int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    // Dicionário: [[string1, contagem1], [string2, contagem2], [string3, contagem3], ...]
    vector<string> strings;
    vector<int> freq;

    string word;
    int max;
    bool have_key = false;

    cout << "Digite algumas strings: \n";

    while (cin >> word)
    { 
        // Digitar barra vertical para sair do while
        if (word == "|")
         break;

        // Testa se a palavra já está no dicionário
        for (int i = 0; i < strings.size(); i++)
        {
            // Se estiver acrescenta 1 na sua contagem
            if (strings[i] == word)
            {
                freq[i] += 1;
                have_key = true;
                break;
            }
        }
            // Se não foi achada ela é adicioanada
            if (!have_key)
            {     
                strings.push_back(word);
                freq.push_back(1);
            }
        have_key = false;

    }

    // Prevenção de entrada vazia
    if (strings.size() == 0)
        cout << "\nNada foi digitado";
    else
        print_dic(strings, freq);
}
