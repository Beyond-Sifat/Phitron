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

void delete_any_position(Node*&head,int idx){
   Node *temp=head;
   for(int i=0;i<idx-1;i++){
    temp=temp->next;
   }
   Node*deleteNode=temp->next;
   temp->next=temp->next->next;
   temp->next->prev=temp;
   delete deleteNode;
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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    delete_any_position(head,1);
    printing_forward(head);
    // printing_backward(tail);
    return 0;
}