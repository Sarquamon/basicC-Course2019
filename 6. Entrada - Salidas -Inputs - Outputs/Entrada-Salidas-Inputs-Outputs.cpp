#include <iostream>

using namespace std;

//Al final de este archivo se realizará una calculadora que solo hará operaciones arimeticas
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
        int suma = valorA + valorB;
        cout << "La suma es: " << suma << endl;
    }
    else if (oper == 2)
    {
        int resta = valorA - valorB;
        cout << "La resta es: " << resta << endl;
    }
    else if (oper == 3)
    {
        int multi = valorA * valorB;
        cout << "La multi es: " << multi << endl;
    }
    else if (oper == 4)
    {
        int division = valorA / valorB;
        cout << "La division es: " << division << endl;
    }
    else
    {
        int suma = valorA + valorB;
        cout << "La suma es: " << suma << endl;
    }

    system("pause");
    return 0;
}