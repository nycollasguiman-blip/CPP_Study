// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa é um jogo

class repeated_value{};
class out_interval{};

int number_in(int number, vector<int> numbers){
    //Retorna index de 'number' em 'numbers'
    //Retorna -1 se 'number' não for achado em 'numbers'
    
    int index = -1;
    for (int i = 0; i < numbers.size(); ++i)
        if (numbers[i] == number){
            index = i;
            return index;
        }
    return index;
}

vector<int> compare_indexes(vector<int> user_n,  vector<int> pc_n){
    // Retorna um vetor [vacas, bois]
    // Vacas: número de valores ao mesmo tempo nos dois vetores de entrada mas não com mesmos indices
    // Bois:  número de valores ao mesmo tempo nos dois vetores de entrada e com mesmos indices
    vector<int> sums;
    int oxen = 0;
    int cows = 0;
    int index;
    for (int i = 0; i < pc_n.size(); ++i){
        index = number_in(user_n[i], pc_n);
        if (index != -1)
            if (user_n[index] == pc_n[index])
                oxen += 1;
            else 
                cows += 1;
    }
    sums.push_back(cows);
    sums.push_back(oxen);
    return sums;
}

vector<int> pick_up_numbers(int quantity){
    // Guarda e retorna as entradas do usuário
    vector<int> inputs;
    int user_number;

    cout << "Digite 4 números inteiros de 0 a 9:\n";
    for (int i = 0; i < quantity; ++i){
        cin >> user_number;
        if (number_in(user_number, inputs) != -1) throw repeated_value();
        if ((user_number < 0) || (user_number > 9)) throw out_interval();
        inputs.push_back(user_number);
    }
    return inputs;
    }

void game(){
    // Veetores do jogador e do pc
    vector<int> user_numbers;
    vector<int> pc_numbers = {1, 2, 3, 4};

    // Guarda entradas do usuário
    int user_number;

    // Quantidade de entradas por vez
    int quantity = pc_numbers.size();

    // Número de bois
    int oxen = 0;

    // Resultado das comparações [vacas, bois]
    vector<int> result;
    while(true){
        try{
            // Execução do jogo
            cout << "==================\n";
            while(oxen < quantity){
                user_numbers = pick_up_numbers(quantity);

                // Faz a comparação dos elementos e indices
                result = compare_indexes(user_numbers, pc_numbers);

                // Exibe resultados
                oxen = result[1];
                cout << "Vacas: " << result[0] << " | Bois: " << oxen << "\n";
                cout << "==================\n";
            }
            cout << "VOCÊ GANHOU!!!";
            break;
        }
        catch(repeated_value){
            cout << "Entradas repetidas\n";
        }
        catch(out_interval){
            cout << "Número fora do intervalo > [0, 9]\n";
        }
    }
    
   
}

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    try{
        game();
    }
    catch(...){
        cout << "Ocorreu algum erro";
    }
    
}
