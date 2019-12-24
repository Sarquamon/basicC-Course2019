#include <iostream>
#include <string>

using namespace std;

class telefono
{
private:
    int capacidad;

public:
    string marca;
    string modelo;
    string pantalla;
    string descripcion;
    // int capacidad;
    int RAM;
    int disponibles = 0;

    telefono()
    {
        marca = "";
        modelo = "";
        descripcion = "";
        pantalla = "";
        capacidad = 0;
        RAM = 0;
        disponibles = 0;
    }

    telefono(string amarca, string amodelo, string apantalla, string adescripcion, int acapacidad, int aRAM, int adisponible)
    {
        marca = amarca;
        modelo = amodelo;
        descripcion = adescripcion;
        pantalla = apantalla;
        setCapacidad(acapacidad);
        RAM = aRAM;
        disponibles = adisponible;
    }

    telefono(string amarca, string amodelo, string adescripcion, int adisponible)
    {
        marca = amarca;
        modelo = amodelo;
        descripcion = adescripcion;
        disponibles = adisponible;
    }

    void setCapacidad(int acapacidad)
    {
        capacidad = acapacidad;
    }
    int getCapacidad()
    {
        return capacidad;
    }

    bool isAvailable()
    {
        if (disponibles > 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    telefono tlf1("apple", "iPhone 9000", "La mejor camara del mercado", 1000);
    telefono tlf2("Samsung", "Galaxy s1++", "La mejor pantalla del mercado", 20);
    telefono tlf3("Xiaomi", "Mi note 1000", "La mejor relacion precio calidad we! xdxd", 0);
    telefono tlf4("Xiaomi", "Generico", "1920x1080", "La mejor relacion precio calidad we! xdxd", 128, 8, 40);

    if (tlf4.isAvailable())
    {
        cout << "El " << tlf4.modelo << " esta disponible" << endl;
        cout << "Su capacidad es: " << tlf4.getCapacidad() << "GB" << endl;
    }
    else
    {
        cout << "El " << tlf4.modelo << " no esta disponible" << endl;
    }

    // tlf1.marca = "Apple";
    // tlf2.marca = "Samsung";
    // tlf3.marca = "Xiaomi";
    // tlf1.modelo = "iPhone 9000";
    // tlf2.modelo = "Galaxy s11++";
    // tlf3.modelo = "Mi note 1000";
    // tlf1.descripcion = "La mejor camara del mercado";
    // tlf2.descripcion = "La mejor pantalla del mercado";
    // tlf3.descripcion = "La mejor relacion precio calidad we! xdxd";

    system("pause");
    return 0;
}