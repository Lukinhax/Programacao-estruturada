#include <iostream>

using namespace std;

int main()
{
    float altura, peso_M, peso_F;
    char sexo;

    cout << "insira a sua altura: ";
    cin >> altura;
    cout << "insira a abrevia��o do seu sexo (M/F): ";
    cin >> sexo;

    if (sexo == 'M')
    {
        peso_M = (72.7 * altura) - 58;
        cout << "o peso ideal de um homem �: " << peso_M;
    }
    else if (sexo == 'F')
    {
        peso_F = (62.1 * altura) - 44.7;
        cout << "o peso ideal de uma mulher �: " << peso_F;
    }
    else
    {
        cout << "Sexo inv�lido. Insira 'M' para masculino ou 'F' para feminino.";
        return 1;
    }
    return 0;
}
