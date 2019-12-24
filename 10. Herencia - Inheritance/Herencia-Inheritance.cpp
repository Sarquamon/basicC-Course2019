#include <iostream>

using namespace std;

class medico
{
public:
    string nombre;
    string tipoCirugia;

    medico()
    {
        nombre = "";
    }

    medico(string anombre)
    {
        nombre = anombre;
        tipoCirugia = "cirugias generales";
    }

    string tiposCirugias()
    {
        return tipoCirugia;
    }
};

class radiologo : public medico
{
public:
    radiologo(string anombre)
    {
        nombre = anombre;
        tipoCirugia = "cirugias generales y al corazon";
    }
    string tiposCirugias()
    {
        return tipoCirugia;
    }
};

int main()
{
    medico medico1("Salomon");

    radiologo radiologo1("luis");

    cout << "El medico general " << medico1.nombre << ". Hace " << medico1.tiposCirugias() << endl;
    cout << "El radiologo " << radiologo1.nombre << ". Hace " << radiologo1.tiposCirugias() << endl;

    system("pause");
    return 0;
}