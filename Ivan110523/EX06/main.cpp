#include <iostream>

using namespace std;

int main()
{
  int vetor [15], i;
 for ( i = 0; i < 15; i++)
 {
   cout << "digite um numero: " << endl;
   cin >> vetor[i];
 }

  for ( i = 0; i < 15; i++)
  {
      cout << vetor[i];

  if ( vetor[i] % 2 == 0 )
  {
      cout << " - o numero � par" << endl;
  }
  else
  {
      cout << " - o nmumero � impar" << endl;
  }
  }
    return 0;
}
