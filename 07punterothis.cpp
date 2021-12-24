#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad)
    {
        this->nombre = nombre;
        this->edad = edad;
    }
    ~Persona()
    {
        cout << "destructor" << endl;
    }
    Persona &setNombre(string nombre)
    {
        this->nombre = nombre;
        return *this;
    }
    Persona &setEdad(int edad)
    {
        this->edad = edad;
        return *this;
    }
    void saludar()
    {
        cout << "Hola soy: " << nombre << endl;
        cout << "Mi edad es: " << edad << endl;
    }
};

int main()
{
    Persona *p = new Persona("Mauri", 27);
    Persona *p2 = new Persona("Vale", 27);

    p->setNombre("Hugo").setEdad(26);
    p2->setNombre("Denisse").setEdad(26);

    p->saludar();
    p2->saludar();

    delete p;
    delete p2;
}