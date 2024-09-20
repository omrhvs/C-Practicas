#include <iostream>
#include <string>

int main()
{
    int altura;
    std::cout << "Ingrese la altura del arbol: ";
    std::cin >> altura;

    for(int i = 0; i < altura; i++)
    {
        for(int j = 0; j < altura - i - 1; j++)\
        {
            std::cout << " ";
        }
        for(int j =0; j < 2 * i + 1; j++)
        {

            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for(int i =0; i < altura - 1; i++)
    {
        for(int j = 0; j < altura - 1; j++)
        {
            std::cout << " ";
        }
        std::cout << "*" << std::endl;
    }

    return 0;
}
