
#include <cstdlib>
#include <iostream>
#include <locale>
#include <cstring>
#include <cctype>

using namespace std;
int main(int argc, char** argv) 
{
    char bolo;
    setlocale (LC_ALL, "Portuguese");
    cout << "escolha uma opção do cardapio para ver o valor: " << endl;
    cout << "Digite - C - escolher o bolo de chocolate." << endl;
    cout << " digite - B - escolher bolo de banan." << endl;
    cin >> bolo;
    bolo = toupper(bolo);
    
    switch(bolo){
            case 'C':
            cout << "o bolo de chocolate custa 14 reais." << endl;
            break;
            case 'B':
            cout << " o bolo de banana custa 17 reais." << endl;
            break;
            default:
                cout << "opção invalida." << endl;}
    return 0;
}

