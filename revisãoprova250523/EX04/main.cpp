#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    if (idade >= 65)
    {
        cout << "voce ser� atendido no caixa preferencial (caixa 1)";
    }
    else
        cout << "voce ser� atendido nos caixas convencionais (caixa 2, 3, 4)";

    return 0;
}
