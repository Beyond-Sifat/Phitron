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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(400);
    head->next = a;
    a->next = b;
    b->next = c;
    // cout << head->value;
    // cout << head->next->value;
    // cout << head->next->next->value;
    // cout << head->next->next->next->value;

    
    //======="HEAD" WILL DISAPPEAR END OF THE LOOP, SO LINKED LIST AS WELL=========

    // while (head != NULL)
    // {
    //     cout << head->value << endl;
    //     head = head->next;
    // }

    //=========SO WE NEED TO PUT "HEAD" IN ANOTHER POINTER========
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
    temp = head; // now temp back in head from null


    // while (temp != NULL)
    // {
    //     cout << temp->value << endl;
    //     temp = temp->next;
    // }

    return 0;
}