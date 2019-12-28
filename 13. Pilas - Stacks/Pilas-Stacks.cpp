//Escencialmente existen varias maneras de hacer una pila, las mas comunes son con un array o con una lista
// En este archivo veremos primero como hacerlo con un arreglo, mas adelante lo veremos con una lista.

#include <iostream>
#include <vector>

using namespace std;

int SIZE = 3;
int top = -1;

std::vector<int> values(SIZE);

void push(int value);
void pop();
bool isEmpty();
bool isFull();
void displayStack();
int showTop();

int main()
{
    push(1);
    push(2);
    push(3);

    displayStack();

    cout << "El valor de arriba es: " << showTop() << "." << endl;

    pop();

    displayStack();

    system("pause");
    return 0;
}

bool isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

bool isFull()
{
    if (top == SIZE - 1)
        return true;
    else
        return false;
}

void push(int value)
{
    if (!isFull())
    {
        top++;
        values[top] = value;
    }
    else
    {
        cout << "Pila llena!" << endl;
    }
}

void pop()
{
    if (!isEmpty())
    {
        cout << "Valor pop: " << values[top] << endl;
        top--;
    }
    else
    {
        cout << "Pila vacia!" << endl;
    }
}

int showTop()
{
    if (!isEmpty())
    {
        return values[top];
    }
    else
    {
        return -1;
    }
}

void displayStack()
{
    if (!isEmpty())
    {
        cout << "Elementos de la lista: " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << values[i] << endl;
        }
    }
    else
    {
        cout << "Pila vacia!" << endl;
    }
}