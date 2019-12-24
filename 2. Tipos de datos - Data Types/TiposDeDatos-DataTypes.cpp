#include <iostream>
#include <string>

using namespace std;

int main()
{

    //Variables tipo entero
    int age = 21; //100, 1, 2, 1000, 9999  //Puede ser cualquier numero, mientras que sea ENTERO
                     // no mayor a 21474836487 y no menor a -2147483648
    // Existen mas tipos de integers (enteros) pero este es el mas comun, los otros pueden ser:
        // long numeroLong;
        // short numeroShort;
        // byte numeroByte;
        // Para mas informacion existe google! c: 

    //Variables tipo decimal
    float decimal = 10.10;
    double doubleDecimal = 10.10000;

    //Variables tipo String (cadena)
    char caracter = 'a';
    string username = "Salomon";
    // cout << "Hello world! Mi nombre es: " << username << ". Mi edad es: " << age << ". Dentro de 9 anos tendre " << age + 9 << endl;
    cout << "Hola Salomon." << endl;

    system("pause");
    return 0;
}