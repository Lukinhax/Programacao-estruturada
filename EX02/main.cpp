
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    int opc;
    
    cout << "digite 1 para o prato do dia!\n";
    cout << "digite 2 para Lasanha!\n";
    cout << " digite 3 para oPicanha grelhada\n";
    cout << "digite 4 para Salada simples\n";      
            
            cin >> opc; 
    
    switch(opc)
    {
        case 1: 
            cout << "prato do dia: 17 reais\n";
        break;
        case 2 : 
            cout << "Lasanha: 17 reais\n";
        break;
        case 3:
            cout << "Picanha grelhada: 21.90 reais\n";
        break;
        case 4:
            cout << "Salda simples; 7.90 reais\n";
        break;
        default:
            cout << "opção invalida!!!\n";
    }
    return 0;
}

