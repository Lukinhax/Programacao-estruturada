#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "digite um numero: ";
    cin >> numero;

    if (numero < 0 )
        cout << "este numero � negativo !!";
    else if( numero > 0)
        cout << "o numero � positivo !!";
    else
        cout << "este numero � neutro !!";

    return 0;
}
