//*https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-09/challenges/queries-6-1/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void delete_at_index(Node *&head, Node *&tail, int index)
{
    if (head == NULL)
    {
        return;
    }
    if (index == 0)
    {
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }

        return;
    }
    Node *temp = head;

    // Go to the node before the target
    for (int i = 0; i < index - 1; i++)
    {
        if (temp->next == NULL)
        {
            return;
        }

        temp = temp->next;
    }

    // Invalid index
    if (temp->next == NULL)
    {
        return;
    }

    // Deleting tail
    if (temp->next == tail)
    {
        tail = temp;
    }

    temp->next = temp->next->next;
}
void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}
int main()
{

    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int x;
        int v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_index(head, tail, v);
        }
        print_linked_list(head);
    }
    return 0;
}