#include <iostream>

using namespace std;

class frutas
{
    public:
        string grupo;
        string nombre;
    string obtenerNombre()
    {
        cout << nombre;
    }
}

int main()
{
    frutas manzana;
    manzana.nombre = "Manzana";
    manzana.obtenerNombre();
    return 0;
}