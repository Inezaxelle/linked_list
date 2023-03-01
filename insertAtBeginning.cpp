#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void addNode(Node **head, int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = nullptr;
    addNode(&head, 3);
    addNode(&head, 2);
    addNode(&head, 1);
    display(head);
    return 0;
}