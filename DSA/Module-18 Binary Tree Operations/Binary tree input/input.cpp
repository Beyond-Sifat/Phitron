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

Node* input_tree()
{
    int val;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }

    Node *root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        // step 1: → Queue-te node push.
        Node *parent = q.front();
        q.pop();

        // step 2: → oi node niye kaj.
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

        // step 3: → tar left/right child queue-te push.
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

void level_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        // step 1: → Queue theke node ber koro.
        Node *front = q.front();
        q.pop();

        // step 2: → node print koro.
        cout << front->value << " ";

        // step 3: → tar left/right child queue-te push.
        if (front->left != NULL)
        {
            q.push(front->left);
        }

        if (front->right != NULL)
        {
            q.push(front->right);
        }
    }
}

int main()
{
    Node *root = input_tree();

    level_order(root);

    return 0;
}