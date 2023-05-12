#include <iostream>

using namespace std;

int main()
{
    char nome[50], opcao, faculdade[20], opcao2, filme[50], comida[50], gosto_programa[50];
    int pais, idade, idade_casa;

   cout << "Insira seu nome: " << endl;
   cin >> nome;
   cout << "que droga de nome poderia trocar para outro melhor no" << endl;

   cout << "voce mora no Brasil ? " << endl;
   cout << "digite 'S' se sim e 'n' se nao morar no brasil." << endl;
   cin >> opcao;

   if (opcao == 's')
   {
       cout << "famoso pais do futebol e do roubo" << endl;
   }
   else
   {
       cout << "qualquer pais e melhor que o Brasil" << endl;
   }
   cout << "se voce pudesse escolher um desses paises a baixo para viver qual deles voce escolheria ?" << endl;
   cout << "1- Canada" << endl;
   cout << "2- Chile" << endl;
   cout << "3- China" << endl;
   cout << "4- Brasil " << endl;
   cin >> pais;

   switch (pais)
   {
       case 1:
       cout << "achou mesmo que poderia escolher, eu que decido e escolho  Brasil " << endl;
       break;
       case 2:
           cout << "achou mesmo que poderia escolher, eu que decido e escolho  Brasil" << endl;
       break;
       case 3:
           cout << "achou mesmo que poderia escolher, eu que decido e escolho  Brasil" << endl;
       break;
       case 4:
           cout << "olha so alguem sabe escolher direito" << endl;
       break;
       default:
            cout << "você não sabe nem escolher direito." << endl;

   }
   cout << "quantos anos voce tem ??" << endl;
   cin >> idade;

    if (idade <= 17)
        cout << "voce nao e um adolescente, e uma enchecao de saco ambulante" << endl;
    else{
        cout << "cuidado em as contas vao te pegar !!" << endl;
        }

        cout << "qual faculdade voce esta cusando" << endl;
        cin >> faculdade;
        cout << "esperava uma faculdade melhor" << endl;

            cout << "Voce esta gostando da sua faculdade, se sim digite 's' se nao digite 'n'" << endl;
            cin >> opcao2;
           while (opcao2 == 'n')
            {
                cout << "Voce esta  gostando da sua faculdade, se sim digite 's' se nao digite 'n'" << endl;
                cin >> opcao2;
            }
            
            cout << ("com quantos anos voce saiu de casa ?") << endl;
            cin >> idade_casa;
           if (idade <= 18)
        cout << "pelo menos uma coisa de certo voce fez" << endl;
    else{
        cout << "demorou para sair da casa dos país porque não sabe fazer nada sozinho !" << endl;
        } 
            cout << ("qual o seu filme favorito ?") << endl;
            cin >> filme;
            cout <<("que mal gosto em") << endl;
            
            cout << ("o que voce gosta de comer ?") << endl;
            cin >> comida;
            cout << (" sua alimentação deve ser uma bosta em ") << endl;
            
            cout << ("finalmente chegamos ao fim do programa, gostou dele ? ") << endl;
            cin >> gosto_programa;
            cout << ("aiai, e voce continua acreditando que tem direito a livre arbitrio aqui ") << endl;
    return 0;
}
