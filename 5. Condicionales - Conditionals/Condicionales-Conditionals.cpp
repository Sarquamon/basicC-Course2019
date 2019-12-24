#include <iostream>

using namespace std;

int main()
{
    //Las condicionales funcionan para validar todo tipo de situaciones dentro
    // de nuestro codigo

    int valorA = 1;
    int valorB = 2;

    if (valorA > valorB)
    {
        cout << "El valor de a es mayor al valor de b" << endl;
        cout << "El valor de a es: " << valorA << ". El valor de b es: " << valorB << endl;
    }
    else if (valorA == valorB)
    {
        cout << "El valor de a es igual al valor de b" << endl;
        cout << "El valor de a es: " << valorA << ". El valor de b es: " << valorB << endl;
    }
    else
    {
        cout << "El valor de b es mayor al valor de a" << endl;
        cout << "El valor de a es: " << valorA << ". El valor de b es: " << valorB << endl;
    }

    system("pause");
    return 0;
}