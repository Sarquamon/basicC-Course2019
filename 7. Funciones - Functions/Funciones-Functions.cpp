#include <iostream>
using namespace std;

int suma(int valorA, int valorB)
{
    return valorA + valorB;
}

int resta(int valorA, int valorB)
{
    return valorA - valorB;
}

int multiplicacion(int valorA, int valorB)
{
    return valorA * valorB;
}

int division(int valorA, int valorB)
{
    return valorA / valorB;
}

int main()
{
    int valorA, valorB;
    int oper;

    cout << "Ingrese el primer valor: ";
    cin >> valorA;

    cout << "Ingrese el segundo valor: ";
    cin >> valorB;

    cout << "El valor de a es: " << valorA << ". El valor de b es: " << valorB << "." << endl;

    cout << "Ingrese la operacion que desea hacer: " << endl;
    cout << "1) Suma: " << endl;
    cout << "2) Resta: " << endl;
    cout << "3) Multiplicacion: " << endl;
    cout << "4) Division: " << endl;

    cin >> oper;

    if (oper == 1)
    {
        cout << "El valor de la suma es: " << suma(valorA, valorB) << endl;
    }
    else if (oper == 2)
    {
        cout << "El valor de la suma es: " << resta(valorA, valorB) << endl;
    }
    else if (oper == 3)
    {
        cout << "La multiplicacion es: " << multiplicacion(valorA, valorB) << endl;
    }
    else if (oper == 4)
    {
        cout << "La division es: " << division(valorA, valorB) << endl;
    }
    else
    {
        cout << "El valor de la suma es: " << suma(valorA, valorB) << endl;
    }

    system("pause");
    return 0;
}