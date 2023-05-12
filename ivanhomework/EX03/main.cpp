#include <iostream>

using namespace std;

int main()
{
    float circunferencia, raio, area, perimetro;
    const float pi= 3.14;


    cout << "digite o valor do comprimento da cricunferencia: \n";
    cin >> circunferencia;

    raio = circunferencia / 2 * pi;
    cout << "o valor do raio é: " << raio;

    area = pi * (raio * raio);
    cout << "\n o valor da area é: " << area;

    perimetro = 2 * pi * raio;
    cout << "\n o valor do perimetro é: " << perimetro;





    return 0;
}
