// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa é um jogo da velha contra o pc, tentei criar um gerador de números aleatórios

// Tentativa de criar uma função com números pseudo-aleatórios
int pseudo_random(int n, int val)
{
    val += 56321;
    int val1 = val; 
    int val2 = 78965;

    // Multiplicar dois números e pegar os 5 primeiros digitos deles, fazendo n vezes
    for (int i = 0; i < n; ++i)
    {
        val1 = (val1*val2) % 100000; // o mais aleatório que sei 
        val2 = (val1*val2) % 100000;
    }

    return sqrt(pow(((val1*val2)%1000)%3, 2)); // Retorna apenas 0, 1 ou 2
}

// Função que retorna o resultado da rodada
int game(string pc_move, string player_move)
{
    if (pc_move == "papel") {
        if (player_move == "papel") return 0;
        else if (player_move == "pedra") return 1;
        else if (player_move == "tesoura") return 2;
    }
    else if (pc_move == "pedra") {
        if (player_move == "pedra") return 0;
        else if (player_move == "tesoura") return 1;
        else if (player_move == "papel") return 2;
    }
    else if (pc_move == "tesoura") {
        if (player_move == "tesoura") return 0;
        else if (player_move == "papel") return 1;
        else if (player_move == "pedra") return 2;
    }

    return -1; // erro
}

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    // Difinições de diversas váriaveis
    int var = 57; // Escolhido arbitráriamente
    int points_player = 0; 
    int points_pc = 0;
    int result; // resultado da codada codificado

    vector<string> moves = {"pedra", "papel", "tesoura"};
    string player_move; // Entrada do movimento do player
    string pc_move; // Entrada do movimento do pc

    int iterator = 0; // Para variar os valores da função pseudo-random

    cout << "Digite pedra, papel ou tesoura: \n";
    while(cin >> player_move)
    {
        
        // Rodada
        var = pseudo_random(iterator, var);
        pc_move = moves[var];
        result = game(pc_move, player_move);

        // Atualizando pontuações
        switch(result)
        {
            case 0:
                cout << "\npc: " << pc_move;
                cout << "\nplayer: " << player_move;
                cout << "\nRodada deu empate!\n";
                break;
            case 1:
                cout << "\npc: " << pc_move;
                cout << "\nplayer: " << player_move;
                cout << "\nPc ganhou rodada!\n";
                points_pc += 1;
                break;
            case 2:
                cout << "\npc: " << pc_move;
                cout << "\nplayer: " << player_move;
                cout << "\nPlayer ganhou rodada!\n";
                points_player += 1;
                break;
            
            

        }


    cout << "-------------------------------\n";
    cout << "Pontos do pc: " << points_pc << "\n" << "Pontos do player: " << points_player;
    cout << "\n-------------------------------\n";
    
    // Para parar o jogo
    if (player_move == "|") {break;}

    // Caso o jogo continue
    cout << "Digite pedra, papel ou tesoura: \n";
    iterator++;
    }
    
}
