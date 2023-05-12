#include <iostream>

using namespace std;

int main()
{
    int pedido, quantidade;
    char nome [25];
    float valor_comanda, valor;

    cout << "inisira seu nome: ";
    cin >> nome;

    cout << "escolha uma opção do cardapio: \n";
    cout << "100 - cachorro quente \n";
    cout << "101 - bauru simples \n";
    cout << "102 - bauru com ovo \n";
    cout << "103 - hamburguer \n";
    cout << "104 - cheeseburguer \n";
    cout << "105 - refrigerante lata \n";
    cout << "106 - Agua \n";
    cin >> pedido;

    switch (pedido)
    {
        case 100:
             cout << "O cachorro quente custa 9.20 a unidade";
        break;
        case 101:
            cout << "O bauru simples custa 12.00 a unidade";
        break;
        case 102:
             cout << "O bauru com ovo custa 13.00 a unidade";
        break;
        case 103:
             cout << "O hamburguer custa 10.00 a unidade";
        break;
        case 104:
             cout <<  "O cheeseburguer custa 12.00 a unidade";
        break;
        case 105:
             cout << "O refrigerante lata custa 5.00 a unidade";
        break;
        case 106:
             cout << "A agua custa 3.00 a unidade";
        break;
    }

        cout << "\n quantas unidades voce gostaria ?";
        cin >> quantidade;

    if (valor = 9.20);
{
        if (valor = 12.00);
         else if (valor = 13.00);
         else if  (valor = 10.00);
         else if (valor = 5.00);
         else if (valor = 3.00);
}

        valor_comanda = quantidade * valor;
        cout << "o valor da comanda foi de: " << valor_comanda;
    return 0;
}






