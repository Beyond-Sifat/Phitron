#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        parent->left = myLeft;
        parent->right = myRight;

        if (parent->left != NULL)
        {
            q.push(parent->left);
        }

        if (parent->right != NULL)
        {
            q.push(parent->right);
        }
    }
    return root;
}

int count_leaf_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if(root->left==NULL &&root->right==NULL){
        return 1;
    }
    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);
    return l+r;
}
int main()
{
    Node *root = input_tree();
    cout<<count_leaf_node(root);
    return 0;
}