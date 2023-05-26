#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    if (idade >= 65)
    {
        cout << "voce será atendido no caixa preferencial (caixa 1)";
    }
    else
        cout << "voce será atendido nos caixas convencionais (caixa 2, 3, 4)";

    return 0;
}
