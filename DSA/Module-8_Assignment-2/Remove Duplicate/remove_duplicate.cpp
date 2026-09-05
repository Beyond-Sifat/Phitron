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

void remove_duplicate(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *temp = current;

        while (temp->next != NULL)
        {
            if (temp->next->value == current->value)
            {
                temp->next = temp->next->next;
            }
            else
            {
                temp = temp->next;
            }
        }

        current = current->next;
    }
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
    Node *head = NULL;
    Node *tail = NULL;

    int value;

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        insert_at_tail(head, tail, value);
    }

    remove_duplicate(head);

    print_linked_list(head);

    return 0;
}
