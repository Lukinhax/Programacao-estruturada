#include <iostream>

using namespace std;

int main()
{
    int i, senha;

   for (i= 1 ; i <=  3; i++)
   {
    cout << "digite sua senha: ";
    cin >> senha;

    if ( senha == 1234)
    {
        cout << "senha correta. " << endl;
        i = 4;
    }
    else
    {
        cout << "Senha incorreta." << endl;
    }
   }
    return 0;
}
