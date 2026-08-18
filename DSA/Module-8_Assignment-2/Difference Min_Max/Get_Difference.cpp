// *https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-09/challenges/get-difference/problem?isFullScreen=true
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

void difference_linked_list(Node *head)
{
    int maximum = head->value;
    int minimum = head->value;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->value > maximum)
        {
            maximum = temp->value;
        }

        if (temp->value < minimum)
        {
            minimum = temp->value;
        }

        temp = temp->next;
    }

    head->value = maximum - minimum;
    head->next = NULL;
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

    difference_linked_list(head);
    printing_linked_list(head);

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int value;
//     Node *next;
//     Node(int value)
//     {
//         this->value = value;
//         this->next = NULL;
//     }
// };
// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
// }

// // void printing_linked_list(Node *head)
// // {
// //     Node *temp = head;
// //     while (temp != NULL)
// //     {
// //         cout << temp->value << endl;
// //         temp = temp->next;
// //     }
// // }

// int difference(Node *head)
// {
//     int maximum = head->value;
//     int minimum = head->value;

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->value > maximum)
//             maximum = temp->value;

//         if (temp->value < minimum)
//             minimum = temp->value;

//         temp = temp->next;
//     }
//     return maximum- minimum;
// }
// int main()
// {

//     Node *head = NULL;
//     Node *tail = NULL;
//     int value;
//     while (true)
//     {
//         cin >> value;
//         if (value == -1)
//         {
//             break;
//         }
//         insert_at_tail(head, tail, value);
//     }
//     cout<<difference(head);
//     // printing_linked_list(head);
//     return 0;
// }