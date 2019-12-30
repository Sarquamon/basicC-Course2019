#include <iostream>

using namespace std;

typedef struct Node {
    int value;
    Node *nextNode;
    Node *prevNode;
} * NodePtr;

void push(int value);
void pop();
bool isEmpty();
void showTop();
void displayStack();

NodePtr headNode = NULL;
NodePtr tailNode = NULL;
NodePtr currentNode = NULL;

int main() {
    push(4);
    push(3);
    push(2);
    push(1);
    displayStack();
    showTop();
    pop();
    showTop();
    displayStack();
    system("pause");
    return 0;
}

bool isEmpty() {
    if (headNode == NULL) {
        return true;
    } else {
        return false;
    }
}

void push(int value) {
    NodePtr newNode = new Node();
    newNode->value = value;
    newNode->nextNode = NULL;
    newNode->prevNode = NULL;

    if (!isEmpty()) {
        currentNode = tailNode;

        while (currentNode->nextNode != NULL) {
            currentNode = currentNode->nextNode;
        }

        currentNode->nextNode = newNode;
        newNode->prevNode = currentNode;
        tailNode = newNode;
    } else {
        headNode = newNode;
        tailNode = newNode;
    }
}

void pop() {
    if (!isEmpty()) {
        currentNode = tailNode->prevNode;
        cout << "Valor: " << tailNode->value << endl;
        delete (tailNode);
        tailNode = currentNode;
        tailNode->nextNode = NULL;
    } else {
        cout << "Pila vacia!" << endl;
    }
}

void showTop() {
    if (!isEmpty()) {
        if (tailNode != NULL) {
            cout << "Valor superior: " << tailNode->value << endl;

        } else {
            cout << "Pila vacia!" << endl;
        }
    } else {
        cout << "Pila vacia! " << endl;
    }
}

void displayStack() {
    cout << "\nDisplay!" << endl;

    currentNode = tailNode;
    if (isEmpty) {
        while (currentNode != NULL) {
            cout << "Valor: " << currentNode->value << endl;
            currentNode = currentNode->prevNode;
        }
        delete (currentNode);
    } else {
        cout << "\nLa pila esta vacia!" << endl;
    }
}