#include <iostream>
#include <string>

using namespace std;

// funcion con parametros
string diaActual(string dia)
{
    cout<<"Hoy es "<< dia<<std::endl;
}

// funcion con parametros por defecto
string diaHoy(string dia = "Jueves")
{
    cout<< "Hoy es "<< dia;
}

int main()
{
    diaActual("Jueves");
    diaHoy();
    diaHoy("Martes");
    return 0;
}
