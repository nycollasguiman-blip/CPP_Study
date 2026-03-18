// Nesse programa eu simplesmente testo 5 diferentes tipos do cpp

#include <iostream>
#include <string>
using namespace std;

int main(){
    int passos = 10;
    double altura = 3.5;
    char letra = 'A';
    string nome = "Nycollas";
    bool decisao = true;

    std::cout << passos<< "\n" << altura<< "\n" << letra<< "\n" << decisao;

    cout << "Please enter your first name and age\n";
    string first_name; // string variable
    int age; // integer variable
    cin >> first_name; // read a string
    cin >> age; // read an integer
    cout << "Hello, " << first_name << " (age " << age << ")\n";
}
