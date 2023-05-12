
#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    float media;
    
    cout << "digite a media do aluno !!!\n";
    cin >> media;
    
    if (media >= 0 && media <= 10)
    {
        cout << "A media é valida!!!/n";
        if (media >=6)
        {
            cout << "Aluno foi aprovado com media " <<media<< "!!!";
        }
        else// do if interno 
        {
            cout << "aluno foi aprovado com media" << media;
        }
    }
    else 
    {
        cout << "a mdeia é invalida!!!/n";
    }

    return 0;
}

