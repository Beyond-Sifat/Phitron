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
void insert_at_position(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node* temp=head;
    for(int i=0;i<idx-1;i++){
        temp=temp->next;
    }
    //*end of loop temp is at idx-1 position
    newNode->next=temp->next;
    temp->next=newNode;
}
void printing_linked_list(Node* head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);



    head->next = a;
    a->next = b;
    insert_at_position(head, 2, 100);
    printing_linked_list(head);
    return 0;
}