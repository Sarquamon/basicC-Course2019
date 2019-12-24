#include <iostream>

using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};

    for(int i = 0; i <= 3; i++){
        cout<< "Posicion: " << i << " valor dentro del arreglo: " << arr[i] << endl;
    }

    system("pause");
    return 0;
}