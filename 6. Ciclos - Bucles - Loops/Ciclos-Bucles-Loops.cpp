#include <iostream>

using namespace std;

int main()
{
    // //Ciclo while
    // int a = 10;
    // int b = 0;
    // while (b < a)
    // {
    //     cout << "El valor de b es: " << b << endl;
    //     cout << "El valor de a es: " << a << endl;
    //     system("pause");
    //     b++;
    //     cout << "El valor de b ahora es: " << b << endl;
    //     system("pause");
    // }

    // //Ciclo Do While
    // a = 10;
    // b = 0;
    // do{
    //     cout << "El valor de b es: " << b << endl;
    //     cout << "El valor de a es: " << a << endl;
    //     system("pause");
    //     b++;
    //     cout << "El valor de b ahora es: " << b << endl;
    //     system("pause");
    // }while(b < a);

    //Cliclo for
    int arr[6] = {1, 2, 3, 4, 5, 6};
    for(int i = 0; i <= 6; i++){
        cout << arr[i] << endl;
        system("pause");
    }

    system("pause");
    return 0;
}