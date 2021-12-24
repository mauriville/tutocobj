#include <iostream>
#include <string>

using namespace std;

class Persona
{
public:
    string nombre = "Mauri";
    int edad = 26;

    void saludar()
    {
        cout << nombre;
    }
};

int main()
{
    Persona *p = new Persona();
    Persona *p2 = new Persona();

    p2->nombre = "Hugo";

    p->saludar();
    p2->saludar();
}