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

int max_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if(root->left==NULL &&root->right==NULL){
        return 0;
    }

    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l,r)+1;
}
int main()
{
    Node *root = input_tree();
    cout<<max_height(root);

    return 0;
}