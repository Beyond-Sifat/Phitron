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
bool compare_linked_list(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->value != temp2->value)
        {
            return false;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 == NULL && temp2 == NULL)
    {
        return true;
    }

    return false;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

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
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, value);
    }
    if (compare_linked_list(head, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}