//std_lib_facilities.h
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

//Consertando os caracteres especiais
#include <windows.h> 

//Para usar comandos do terminal
#include <stdlib.h>

// Esse programa é resultado da parte prática do capítulo 3 do livro, basicamente é feito 
// algumas perguntas e uma mensagem de email é gerada com base em um template.


int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    // Perguntas
    cout << "Digite o nome da pessoa para quem deseja escrever\n";
    string first_name;
    cin >> first_name;

    cout<< "\nDigite a idade da pessoa para quem deseja escrecer\n";
    int age;
    cin  >> age;

    cout << "\nDigite o nome de outro amigo seu: \n";
    string friend_name;
    cin >> friend_name;

    char friend_gender = 0;
    cout << "\nDigite o sexo do seu amigo (m ou f): \n";
    cin >> friend_gender;

    // Template do email
    cout << "\n-----------------------------";
    cout << "\nPrezado(a) " << first_name << ", \n\n";
    cout << "Como você vai?\nEu estou bem.\nSinto sua falta.\n";
    cout << "\nVocê viu o "<< friend_name<< " recentemente?\n";

    if (friend_gender == 'm') 
    {
        cout << "Se você encontrar o " << friend_name << " por favor peça a ele para me telefonar.";
    }
    else 
    {
        cout << "Se você encontrar a " << friend_name << " por favor peça a ela para me telefonar."; 
    }

    if (age > 110 || age <= 0)
    {
        cout << "\nVocê só pode estar brincando quando a sua idade kkkkkkk";
    }
    else
    {
        cout << "\nSoube que você fez aniversário há pouco e agora tem " << age << " anos.";
    }
     

    if (age < 12)
    {
        cout << "\nNo próximo ano você terá " << age+1 << " anos!";
    }
    else if (age == 17)
    {
        cout << "\nNo próximo ano você poderá voltar!";
    }
    else if (age > 70)
    {
        cout << "\nEspero que você esteja aproveitando a aposentadoria.";
    }

    cout << "\n\nAtenciosamente, \n\n\n";
    cout << "\n-----------------------------";
    
}
   

    