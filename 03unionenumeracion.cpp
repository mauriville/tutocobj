#include <iostream>
#include <string>

using namespace std;

int main()
{
    union numero_letra
    {
        int numero;
        char letra;
    };

    numero_letra x = {'a'};

    cout << "x como un numero: " << x.numero << endl;
    cout << "x como un letra: " << x.letra << endl;

    enum dias_semana
    {
        lunes = 'l',
        martes = 'm',
        miercoles = 'x'
    };

    dias_semana dia = martes;

    cout << (char)dia;
}