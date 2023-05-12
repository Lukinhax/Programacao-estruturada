
#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
    setlocale (LC_ALL, "Portuguese");
    int num, contador = 1;
    
    do
    {
        cout << "informe um numero: " << endl;
        cin >> num; 
        if ( num != 0)
            contador = contador + 1;
    }   
    while (num != 0);
    
    cout << "foram digitados " << contador << "numeros" << endl;
            
}

