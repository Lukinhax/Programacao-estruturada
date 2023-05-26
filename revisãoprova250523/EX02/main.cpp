#include <iostream>

using namespace std;

int main()
{
    int ouro, prata, bronze, total;


   cout << "Digite o numero de medalhas de ouro do Brasil: " << endl;
   cin >> ouro;

   cout << "\nDigite o numero de medalhas de prata do Brasil: " << endl;
   cin >> prata;

   cout << endl <<"Digite o numero de medalhas de bronze do Brasil: " << endl;
   cin >> bronze;

   total = ouro + prata + bronze;

   cout << "\n O numero total de medalhas que o Brasil ganhou foi: " << total;

//neste exercicio eu coloquei o 1 "endl" no começo da frase para ver como fica caso eu queira mudar de "\n" par "endl", os dois tem a mesma função apenas coloquei como forma de conhecimento.



    return 0;
}
