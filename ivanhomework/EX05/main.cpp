#include <iostream>

using namespace std;

int main()
{  int numero;

    cout << "digite um numero: ";
    cin >> numero;

    if (numero < 0 )
        cout << "este numero � negativo !!";
    else
        cout << "este numero � positivo !!";
    return 0;
}
