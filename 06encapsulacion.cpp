#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string n, int e)
    {
        nombre = n;
        edad = e;
    }
    ~Persona()
    {
        cout << "destructor" << endl;
    }
    void saludar()
    {
        cout << nombre << endl;
    }
};

int main()
{
    Persona *p = new Persona("Mauri", 27);
    Persona *p2 = new Persona("Vale", 27);

    p->saludar();
    p2->saludar();

    delete p;
    delete p2;
}