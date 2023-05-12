#include <iostream>
#include <locale>
using namespace std;

int main()
{
   setlocale (LC_ALL, "portuguese");
   int vetor [5], i;

   for (i = 0; i < 5; i++)
   {
       cout << "Digite um numero para armazenar na posição: " << (i) << " do vetor " << endl;
       cin >> vetor [i];
   }

   cout << "--------------------------------------------------" << endl;

   for (int i = 0; i < 5; i++)
   {
       cout << vetor[i] << endl << endl;
   }




    return 0;
}
