// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa recebe dois números com unidades e retorna diversas informações, foi uma tentativa de
// fazer tudo o que a parte prática do capitulo 4 pede ao mesmo tempo considerando as unidades.

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    double val1, val2, greatest, lowest; // Váriáveis com as diversas unidades (ficam implicitas)
    double meter1, meter2, greatest_meter, lowest_meter; // Váriaveis todas em metros, são as mesmas de cima
    string uni1, uni2; // Unidades
    bool first = true; // Se valor máximo e mínimo já receberam valor
    int total_val = 0; // Total de valores que entraram
    double sum = 0; // Soma de todos os valores que entraram em metros
    vector<double> val_meters; // Vetor com todos os valores em metros


    cout << "Digite dois números com suas respectivas unidades.\n";
    while (cin >> val1 >> uni1 >> val2 >> uni2)
    {
        // Testa se unidade é valida
        if (((uni1 == "cm") || (uni1 == "pol") || (uni1 == "ft") || (uni1 == "m"))&&((uni2 == "cm") || (uni2 == "pol") || (uni2 == "ft") || (uni2 == "m"))) 
        {
            // Transforma os dois valores para metros 
            if (uni1 == "cm")
            {
                meter1 = val1 / 100;
            }
            else if (uni1 == "pol")
            {
                meter1 = (val1 * 2.54) / 100;
            }
            else if (uni1 == "ft")
            {
                meter1 = (val1 * 12 * 2.54) / 100;
            }
            else if (uni1 == "m")
            {
                meter1 = val1;
            }

            if (uni2 == "cm")
            {
                meter2 = val2 / 100;
            }
            else if (uni2 == "pol")
            {
                meter2 = (val2 * 2.54) / 100;
            }
            else if (uni2 == "ft")
            {
                meter2 = (val2 * 12 * 2.54) / 100;
            }
            else if (uni2 == "m")
            {
                meter2 = val2;
            }
            
        // Inicializa as váriaveis do menor e do maior valor 
        if (first)
        {
            if (meter1 > meter2)
            {
                greatest = val1;
                lowest = val2;
                greatest_meter = meter1;
                lowest_meter = meter2;
            }
            else
            {
                greatest = val2;
                lowest = val1;
                greatest_meter = meter2;
                lowest_meter = meter1;
            }
            first = false;
        }

        // Template saída das informações
        cout << "\n------------------------------------------\n";
        cout << "| " << val1 << uni1 << " | " << val2 << uni2 << " |\n";
        
        if (meter1 > meter2)
        {
            if (greatest_meter < meter1)
            {
                greatest = val1;
                greatest_meter = meter1;
            }
            if (lowest_meter > meter2)
            {
                lowest = val2;
                lowest_meter = meter2;
            }
            cout << "O menor valor é: "<< val2 << uni2 << "\nO maior valor é: " << val1 << uni1;
        }
        else if (meter1 == meter2)
        {
            if (greatest_meter < meter1)
            {
                greatest = val1;
                greatest_meter = meter1;
            }
            if (lowest_meter > meter1)
            {
                lowest = val1;
                lowest_meter = meter1;
            }
            cout << "Os dois valores são iguais";
        }
        else
        {
            if (greatest_meter < meter2)
            {
                greatest = val2;
                greatest_meter = meter2;
            }
            if (lowest_meter > meter1)
            {
                lowest = val1;
                lowest_meter = meter1;
            }
            cout << "O menor valor é: "<< val1 << uni1 << "\nO maior valor é: " << val2 << uni2;
        }

        // Soma dos valores em metros e o total de valores (dois por iteração)
        sum += (meter1 + meter2);
        total_val += 2;

        // Testa proximidade dos valores
        if (((meter1 - meter2) < 0.0001) || ((meter2 - meter1) < 0.0001))
        {
            cout << "\nOs valores são quase iguais.\n";
        }

        // Mostra o maior e o menor de todos que já entraram
        cout << "O maior valor (em metros) até o momento é: " << greatest_meter;
        cout << "\nO menor valor (em metros) até o momento é: " << lowest_meter;
        cout << "\nTotal de valores até o momento: " << total_val;
        cout << "\nSoma dos valores (em metros) até o momento: " << sum <<"m";
        cout << "\n------------------------------------------\n";
        val_meters.push_back(meter1);
        val_meters.push_back(meter2);

    }
    else
    {
        cout << "Unidade inválida ou faltante!";
        break;
    }
    }
    // Mostra todos os valores guardados em val_meters em ordem crescente
    sort(val_meters.begin(), val_meters.end());
    for (int i; i <= val_meters.size(); ++i)
    {
        cout << val_meters[i] << "\n";
    }
    
}
