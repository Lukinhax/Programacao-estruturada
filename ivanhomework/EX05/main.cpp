#include <iostream>

using namespace std;

int main()
{  int numero;

    cout << "digite um numero: ";
    cin >> numero;

    if (numero < 0 )
        cout << "este numero é negativo !!";
    else
        cout << "este numero é positivo !!";
    return 0;
}
