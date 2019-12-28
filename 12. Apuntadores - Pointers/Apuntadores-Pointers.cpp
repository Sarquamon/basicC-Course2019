#include <iostream>
using namespace std;

int box1 = 1;
int box2 = 2;
int *gptr;

void passByVal(int val);
void passByRef(int &ref);
void passByPtr(int *ptr);
void passByPtrRef(int *&ptrRef);

int main()
{
    int *ptrbox1 = &box1;
    gptr = &box2;
    cout << "Valor inicial box1: " << box1 << endl;
    passByVal(box1);
    cout << "Valor de box1 despues de val: " << box1 << endl;
    passByRef(box1);
    cout << "Valor de box1 despues de ref: " << box1 << endl;
    passByPtr(ptrbox1);
    cout << "Valor de box1 despues de ptr: " << box1 << endl;
    passByPtrRef(ptrbox1);
    cout << "Valor de box2 despues de ptrRef: " << box2 << endl;

    system("pause");
    return 0;
}

void passByVal(int val)
{
    val = 10;
    cout << "Value: " << val << endl;
}

void passByRef(int &ref)
{
    ref = 20;
    cout << "Ref: " << ref << endl;
}

void passByPtr(int *ptr)
{
    *ptr = 30;
    cout << "*Ptr: " << *ptr << endl;
}

void passByPtrRef(int *&ptrRef)
{
    cout << "*PtrRef box1 entrada: " << *ptrRef << endl;
    *ptrRef = 40;
    cout << "*PtrRef box1 modificado: " << *ptrRef << endl;
    ptrRef = gptr;
    *ptrRef = 50;
    cout << "*PtrRef modificado: " << *ptrRef << endl;
}