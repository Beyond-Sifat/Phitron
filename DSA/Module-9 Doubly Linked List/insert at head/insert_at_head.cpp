#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head->prev=newNode;
    head = newNode;
}

void printing_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
// void printing_backward(Node *tail)
// {
//     Node *temp = tail;
//     while (temp != NULL)
//     {
//         cout << temp->value << " ";
//         temp = temp->prev;
//     }
//     cout << endl;
// }
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    insert_at_head(head, 100);
    printing_forward(head);
    // printing_backward(tail);
    return 0;
}