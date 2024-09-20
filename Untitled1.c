#include <iostream>

using namespace std;

int main()
{
    int edad;

    cout << "Ingrese su edad";

    cin >> edad;

    String rango = (edad < 18) ? "Mayor de edad" : "Menor de edad";
    cout << rango;

    return 0;
}
