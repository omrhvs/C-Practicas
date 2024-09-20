#include <iostream>
#include <string>

using namespace std;

int main()
{
    int edad;

    cout << "Ingrese su edad:\n";

    cin >> edad;

    string rango = (edad < 18) ? "Menor de edad" : "Mayor de edad";

    cout << rango;

    return 0;
}
