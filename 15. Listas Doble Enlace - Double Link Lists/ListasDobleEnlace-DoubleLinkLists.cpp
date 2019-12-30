#include <iostream>

using namespace std;

typedef struct Node
{
    int value;
    Node *nextNode;
    Node *prevNode;
} * nodePtr;

nodePtr headNode = NULL;
nodePtr tempNode = NULL;
nodePtr tailNode = NULL;
nodePtr currentNode = NULL;

void insertToListBeg(int val);
void insertToListEnd(int val);
void deleteListNode(int val);
void printList();

int main()
{
    insertToListBeg(4);
    insertToListBeg(3);
    insertToListBeg(2);
    insertToListBeg(1);
    insertToListEnd(5);
    insertToListEnd(6);
    printList();
    system("pause");
    return 0;
}

void insertToListBeg(int val)
{
    nodePtr newNode = new Node();
    newNode->value = val;
    newNode->prevNode = NULL;
    newNode->nextNode = NULL;
    if (headNode != NULL)
    {
        newNode->nextNode = headNode;
        currentNode = headNode;
        headNode = newNode;
        tempNode = tailNode;

        while (tempNode->prevNode != NULL)
        {
            tempNode = tempNode -> prevNode;
        }
        if(tempNode != NULL){
            tempNode -> prevNode = newNode;
            // delete(tempNode);
        }else{
            currentNode -> prevNode = newNode;
            delete(currentNode);
        }
    }
    else
    {
        headNode = newNode;
        tailNode = newNode;
    }
}

void insertToListEnd(int val)
{
    nodePtr newNode = new Node();
    newNode->value = val;
    newNode->nextNode = NULL;
    newNode->prevNode = NULL;

    if (headNode != NULL)
    {
        currentNode = tailNode;
        while (currentNode->nextNode != NULL)
        {
            currentNode = currentNode->nextNode;
        }
        currentNode->nextNode = newNode;
        newNode->prevNode = currentNode;
    }
    else
    {
        headNode = newNode;
        tailNode = newNode;
    }
}

void printList()
{
    cout << "Printing! " << endl;

    currentNode = headNode;

    cout << "\n Head:" << headNode << endl;
    cout << "\n Tail:" << tailNode << endl;

    while (currentNode != NULL)
    {
        cout << "\nNodo: " << currentNode << endl;
        cout << "Valor: " << currentNode->value << endl;
        cout << "Siguiente: " << currentNode->nextNode << endl;
        cout << "Previo: " << currentNode->prevNode << endl;
        currentNode = currentNode->nextNode;
    }
}