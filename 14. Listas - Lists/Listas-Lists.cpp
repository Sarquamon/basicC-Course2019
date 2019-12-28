#include <iostream>

using namespace std;

typedef struct Node
{
    int value;
    Node *nextNode;
} * nodePtr;

// typedef struct Node *nodePtr;

nodePtr head = NULL;
nodePtr tempPtr = NULL;
nodePtr currentNode = NULL;

void insertToListBeg(int val);
void insertToListEnd(int val);
void deleteListNode(int val);
void printList();

int main()
{
    insertToListBeg(1);
    insertToListEnd(2);
    insertToListEnd(3);
    insertToListEnd(4);
    printList();

    system("pause");
    return 0;
}

void insertToListBeg(int val)
{
    nodePtr newNode = new Node();
    newNode->value = val;
    newNode->nextNode = head;
    head = newNode;
}

void insertToListEnd(int val)
{
    nodePtr newNode = new Node();

    newNode->value = val;
    newNode->nextNode = NULL;

    if (head != NULL)
    {
        currentNode = head;
        while (currentNode->nextNode != NULL)
        {
            currentNode = currentNode->nextNode;
        }
        currentNode->nextNode = newNode;
    }
    else
    {
        head = newNode;
    }
}

void deleteListNode(int val)
{
    nodePtr delPtr = NULL;
    tempPtr = head;
    currentNode = head;
    while (currentNode->nextNode != NULL && currentNode->value != val)
    {
        tempPtr = currentNode;
        currentNode = currentNode->nextNode;
    }
    if (currentNode == NULL)
    {
        cout << "El numero " << val << " no estaba en la lista." << endl;
        delete delPtr;
    }
    else
    {
        delPtr = currentNode;
        currentNode = currentNode->nextNode;
        tempPtr->nextNode = currentNode;
        if (delPtr == head)
        {
            head = head->nextNode;
            tempPtr = NULL;
        }
        delete delPtr;
        cout << "El numero " << val << " fue eliminado." << endl;
    }
}

void printList()
{
    currentNode = head;

    while (currentNode != NULL)
    {
        cout << "Valor: " << currentNode->value << endl;
        currentNode = currentNode->nextNode;
    }
}