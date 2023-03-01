#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};


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
    return 0;
}