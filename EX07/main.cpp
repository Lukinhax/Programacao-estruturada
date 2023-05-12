

#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std; 

 int main(int argc, char** argv) 
{
     setlocale (LC_ALL, "Portuguese");
     int i = 1, num ; 
     
     cout << "informe um numero: " << endl;
     cin >> num;
     cout << "os 10 antecessores de: " << num << " são: " << endl;
     
     do {
         cout << num - i << endl;
         i=i+1;
     }
     while (i<=10);
     
             
    return 0;
}

