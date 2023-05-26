#include <iostream>

using namespace std;

int main()
{
    int matriz [2][3];
    int i, j;
    // Preenchimento de matriz
    for (i=0; i<2; i++)//linha
    {
    for (j=0; j<3; j++){//coluna
    cout << "Digite o valor para a matriz: ";
    cin >> matriz [i][j];
    }
}

//mostrando os valores
for (i=0; i<2;i++)//linha
{
    for (j = 0; j < 3; j++)//coluna
    {
        cout << matriz [i][j] << "\t";
    }
    cout << endl;
}

    //i = linha e j = coluna.
    // o primeiro sempre é linha e o segundo é smepre coluna.
    return 0;
}
