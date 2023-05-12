#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "digite um numero: ";
    cin >> numero;

    if (numero < 0 )
        cout << "este numero é negativo !!";
    else if( numero > 0)
        cout << "o numero é positivo !!";
    else
        cout << "este numero é neutro !!";

    return 0;
}
