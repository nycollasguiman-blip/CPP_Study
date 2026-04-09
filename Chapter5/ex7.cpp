// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe coeficientes da equação quadrática e retorna a solução, faz o tratamento de erros

// Execeção de raíz
class Error_root{};

// Execeção do coeficiente quadrático
class Erro_quadratic_coef{};

vector<double> quadratic_equation_sol(double a, double b , double c){

    vector<double> solutions;
    if (a == 0) throw Erro_quadratic_coef();

    double delta = pow(b,2) - 4*a*c;
    if (delta < 0 ) throw Error_root();

    solutions.push_back((-b - sqrt(delta))/(2*a));
    solutions.push_back((-b + sqrt(delta))/(2*a));

    return solutions;
}


int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    try{
        cout << "Diga os termos da equação ax^2 + bx + c = 0: \n";
        double a, b, c;
        vector<double> solutions;

        cin >> a >> b >> c;

        solutions = quadratic_equation_sol(a, b, c);

        cout << "\nRaizes: ";
        cout << "\nr1 = " << solutions[0];
        cout << "\nr2 = " << solutions[1];
    }
    catch(Error_root){
        cerr << "\nEquação sem raízes reais!" << endl;
    }
    catch( Erro_quadratic_coef){
        cerr << "\nO coeficiente quadrático é zero!" << endl;
    }
    catch(...)
    {
        cerr << "\nOcorreu alguma execeção!";
    }
}
