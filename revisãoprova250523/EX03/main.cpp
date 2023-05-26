#include <iostream>

using namespace std;

int main()
{
    int opcao;
    float resultado, num1, num2;

    cout << "Escolha uma das opções abaixo para efetuar o tipo de calculo que deseja: " << endl << endl;
    cout << " 1 - para somar" << endl;
    cout << " 2 - para subtrair" << endl;
    cout << " 3 - para dividir" << endl;
    cout << " 4 - para multiplicar" << endl;
    cout << " 5 - para sair" << endl << endl;

    cout << "informe a opção deseja: "<< endl;
    cin >> opcao;

    switch (opcao){
     case 1:
    cout << "\n digite o primeiro numero: " << endl ;
     cin >> num1;
    cout << "\n digite o segundo numero: " << endl;
     cin >> num2;

      resultado = num1 + num2;

    cout << "O resultado é: " << resultado;
      break;

     case 2:
         cout << "\n digite o primeiro numero: " << endl ;
    cin >> num1;
    cout << "\n digite o segundo numero: " << endl;
    cin >> num2;

        resultado = num1 - num2;

     cout << "O resultado é: " << resultado;
     break;

     case 3:
         cout << "\n digite o primeiro numero: " << endl ;
    cin >> num1;
    cout << "\n digite o segundo numero: " << endl;
    cin >> num2;

        resultado = num1 / num2;

        cout << "O resultado é: " << resultado;
     break;

     case 4:
     cout << "\n digite o primeiro numero: " << endl ;
    cin >> num1;
    cout << "\n digite o segundo numero: " << endl;
    cin >> num2;

        resultado = num1 * num2;

        cout << "O resultado é: " << resultado;
     break;

     case 5:
        cout << " sair do programa";
     break;
     default:
        cout << "opção invalida";
     break;
    }

    return 0;
}
