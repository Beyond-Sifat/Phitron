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
void printing_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void printing_reverse(Node *head)
{
    Node *temp = head;
    //base case
    if(temp==NULL){
        return;
    }
    printing_reverse(head->next);
    cout<<head->value<<" ";
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
    printing_reverse(head);

    return 0;
}

// =========================RECURSION RECAP======================

// #include <bits/stdc++.h>
// using namespace std;
// void rec(int i, int n)
// {
//     //* base case
//     if (i > n)
//     {
//         return;
//     }
//     cout << i << " ";
//     rec(i + 1, n);
//     cout << i << " "; //* reverse print
// }
// int main()
// {
//     int n = 5;
//     rec(1, n);
//     return 0;
// }