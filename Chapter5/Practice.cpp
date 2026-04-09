// std_lib_facilities.h
#include "std_lib_facilities.h"

// Consertando os caracteres especiais
#include <windows.h>

// Esse programa serve para ...

int main()
{
    system("cls");
    SetConsoleOutputCP(CP_UTF8); // Do windows.h
    SetConsoleCP(CP_UTF8);

    try{
        cout << "Sucesso!\n";
        keep_window_open();
        return 0;
    }
    catch (exception & e){
        cerr << "erro" << e.what() << "\n";
        keep_window_open();
        return 1;
    }
    catch (...){
        cerr << "Opa execeção desconhecida!\n";
        keep_window_open();
        return 2;
    }

    /*

    Erros em cada caso

    1. Cout << "Sucesso!\n"; <-- Erro de compilação,Cout não declarado;

    2. cout << "Sucesso!\n; <-- Erro de compilação, falta de ";

    3. cout << "Sucesso" << !\n" <-- Erro de compilação, falta de ";

    4. cout << sucesso << endl; <-- Erro de compilação, sucesso não declarado;

    5. string res = 7; vector<int> v(10); v[5] = res; cout << "Sucesso!\n"; <-- Erro de compilação, 
    tentando converter int para não escalar;


    6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Sucesso!\n"; <-- Erro de compilação, tentando
    chamar uma função v() e não o elemento um vetor;

    7. if (cond) cout << "Sucesso!\n"; else cout << "Falha!\n"; <-- Erro de compilação, cond não declarado;

    8. bool c = false; if (c) cout << "Sucesso!\n"; else cout << "Falha!\n"; <-- Erro de lógica, c deveria
    ser true;

    9. string s = "macaco"; boo c = "bobo"<s; if (c) cout << "Sucesso!\n"; <-- Erro de compilação, não
    existe um tipo boo, logo boo não declarado

    10. string s = "macaco"; if (s=="bobo") cout << "Sucesso!\n"; <-- Erro de lógica, s é diferente de bobo,
    logo nunca é retornado sucesso;

    11. string s = "macaco"; if (s=="bobo") cout < "Sucesso!\n"; <-- Erro de compilção, não é só "<" e 
    sim "<<";

    12. string s = "macaco"; if (s+"bobo") cout < "Sucesso!\n"; <-- Erro de compilação, há dois erros,
    o primeiro é que a concatenação gera uma string e ela não bool, além disso há o mesmo erro de 11.;

    13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Sucesso!\n"; <-- Erro de execução, 
    a condição de saída do laço for nunca é atingida e ele é inútil;

    14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Sucesso!\n"; <--  Aviso na compilação
    para tomar cuidado com a comparação entre int (pode ser + ou -) e unsigned int (apenas +);

    15. string s = "Sucesso!\n"; for (int i=0; i<6; ++i) cout << s[i]; <-- Erro de lógica, alguns caracteres
    da mensagem não serão exibidos, já que i deveria ser percorrido até o tamanho da string que é maior 
    que 6;
    
    16. if (true) then cout << "Sucesso!\n"; else cout << "Falha!\n"; <-- Erro de compilação, "then" não
    declarado, na verdade ele nem deveria estar;

    17. int x = 2000; char c = x; if (c==2000) cout << "Sucesso!\n"; <-- Erro de lógica, conversão 
    problemática de char para um int grande (2000) c = -48! logo nunca entra no loop;

    18. string s = "Sucesso!\n"; for (int i=0; i<10; ++i) cout << s[i]; <-- Erro de lógica, por sorte
    funcionou, a string s tem 9 caracteres (\n conta como 1) mas o loop for chega até o 
    indice 9 (10° elemento);

    19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Sucesso!\n"; <-- Erro de compilação, o tipo
    dos elementos do vetor não foi declarado;

    20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Sucesso!\n"; <-- Erro de lógica, a condição
    do while nunca é false já que o i nunca é alterado dentro do e while e portando permanece i<10;

    21. int x = 2; double d = 5/(x-2); if (d==2*x+0.5) cout << "Sucesso!\n"; <-- Erro de execução, ocorre 
    difisão por zero em d;

    22. string<char> s = "Sucesso!\n"; for (int i=0; i<=10; ++i) cout << s[i]; <-- Erro de compilação,
    a string já é uma sequência de char por definição, pela sintaxe não precisa indicar o tipo: "<char>";

    23. int i=0; while (i<10) ++j; if (j<i) cout << "Sucesso!\n"; <-- Erro de compilação, j nunca foi 
    declarado e mesmo se você cairia no erro de lógica de 20.;

    24. int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Sucesso!\n"; <-- Erro de lógica, 
    provavelmente o que se desejava era a comparação entre d e a expressão com x "d == 2*x+0.5";

    25. cin << "Sucesso!\n"; <-- Erro de compilação, provavelmente gerado pelo erro de sintaxe de colocar 
    cin no lugar do cout;

    
    */

}

