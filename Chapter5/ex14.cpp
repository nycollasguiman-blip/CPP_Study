// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe uma série de dias da semana e dias, exibe os válidos e conta os inválidos
// exinbindo esses valores no final

bool is_in(string word, vector<string> words){
    // Testa se 'word' está em 'words'
    for (int i = 0; i < words.size(); ++i){
        if (words[i] == word)
            return true;
    }
    return false;
}

bool validation (string week_day, int day){
    // Faz diversos testes de validação do dia da semana
    if ((day <= 0) || (day > 31)){
        return false;
    }

    // Vetor de possibilidades
    vector<string> valid_week_days = {
    // Domingo
    "domingo","Domingo","DOMINGO","dom","Dom","DOM",

    // Segunda
    "segunda","Segunda","SEGUNDA",
    "segunda-feira","Segunda-feira","SEGUNDA-FEIRA",
    "segunda feira","Segunda feira","SEGUNDA FEIRA",
    "seg","Seg","SEG",

    // Terça
    "terca","Terca","TERCA",
    "terça","Terça","TERÇA",
    "terca-feira","Terca-feira","TERCA-FEIRA",
    "terça-feira","Terça-feira","TERÇA-FEIRA",
    "terca feira","Terca feira","TERCA FEIRA",
    "terça feira","Terça feira","TERÇA FEIRA",
    "ter","Ter","TER",

    // Quarta
    "quarta","Quarta","QUARTA",
    "quarta-feira","Quarta-feira","QUARTA-FEIRA",
    "quarta feira","Quarta feira","QUARTA FEIRA",
    "qua","Qua","QUA",

    // Quinta
    "quinta","Quinta","QUINTA",
    "quinta-feira","Quinta-feira","QUINTA-FEIRA",
    "quinta feira","Quinta feira","QUINTA FEIRA",
    "qui","Qui","QUI",

    // Sexta
    "sexta","Sexta","SEXTA",
    "sexta-feira","Sexta-feira","SEXTA-FEIRA",
    "sexta feira","Sexta feira","SEXTA FEIRA",
    "sex","Sex","SEX",
    "senta-feira","Senta-feira","SENTA-FEIRA",

    // Sábado
    "sabado","Sabado","SABADO",
    "sábado","Sábado","SÁBADO",
    "sab","Sab","SAB"
    };

    if(!(is_in(week_day, valid_week_days)))
        return false;

    return true;

}
int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);
    
    // Entrada de valores
    cout << "Entre com uma sequência de dia da semana e dia: \n";
    string week_day;
    int day;

    // Definição dos vetores
    vector<string> week_days;
    vector<int> days;
    vector<int> valid_indexes;

    // Coleta entradas do teclado
    while(cin >> week_day){
        if (week_day == "|")
            break;
        cin >> day;
        week_days.push_back(week_day);
        days.push_back(day);
    }

    // Testa, exibe e guarda os indices das entradas válidas
    cout << "\n-=Aceitos=-\n";
    for (int i = 0; i < week_days.size(); ++i){
        if (validation(week_days[i], days[i])){
            valid_indexes.push_back(i);
            cout << week_days[i] << " | " << days[i] << "\n";
        }
    }

    // Exibe valores
    cout << "\nNúmero de valores rejeitados: " << week_days.size() - valid_indexes.size();
    cout << "\nNúmero de valores aceitos: " << valid_indexes.size();


}
