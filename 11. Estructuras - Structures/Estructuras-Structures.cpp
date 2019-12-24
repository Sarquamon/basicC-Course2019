#include <iostream>
// #include <conio.h>

using namespace std;

struct consola
{
    string marca;
    string nombre;
    int capacidad;
} consolas[3];
// consola1 = {"Sony", "Playstation 5", 2048}, consola2 = {"Microsoft", "Xbox Series X", 1024};

int main()
{
    // consola consola1 = {"Sony", "Playstation 5", 2048};
    // consola consola2 = {"Microsoft", "Xbox Series X", 1024};

    // cout << "La marca es: " << consola1.marca << endl;

    for (int i = 0; i < 3 ; i++)
    {
        cin.clear();
        fflush(stdin);
        cout << "\nMarca del dispositivo: ";
        cin >> consolas[i].marca;
        cin.clear();
        fflush(stdin);
        cout << "Nombre del dispositivo: ";
        cin >> consolas[i].nombre;
        cin.clear();
        fflush(stdin);
        cout << "Capacidad del dispositivo: ";
        cin >> consolas[i].capacidad;
    }

    for(int i = 0; i < 3; i++){
        cout << "\nLa marca del dispositivo " << i << " es: " << consolas[i].marca << endl;
        cout << "El nombre del dispositivo " << i << " es: " << consolas[i].nombre << endl;
        cout << "La capacidad del dispositivo " << i << " es: " << consolas[i].capacidad << endl;
    }

    // getch();
    system("pause");
    return 0;
}