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
    newNode->data = 3;
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
    Node *head = NULL;
    return 0;
}