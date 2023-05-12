#include <iostream>

using namespace std;

int main()
{
    char nome_produto [25];
    float valor_produto, valor_final, valor_desconto;


   cout << "digite o nome do produto: \n";
   cin >> nome_produto;
   cout << "digite o valor do produto: \n";
   cin >> valor_produto;

   valor_final = valor_produto * 0.87;
   valor_desconto = valor_final - valor_produto;

   cout << "produto: " << nome_produto;
   cout << "\n valor antes do desconto: " << valor_produto;
   cout << "\n valor do desconto: " << valor_desconto;
   cout << "\n valor do produto após o desconto: " << valor_final;






    return 0;
}
