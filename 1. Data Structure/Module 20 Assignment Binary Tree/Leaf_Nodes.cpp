#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
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

        p->left = myLeft;
        p->right = myRight;

        // 3rd step. push the children to queue
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
};

void print_leaf(Node *root)
{
    if(root == NULL) return;
    queue<Node *> q;

    q.push(root);
    vector<int> v;

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
        {
            v.push_back(f->val);
        }

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    // reverse(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<int>());

    for (int i : v)
    {
        cout << i << " ";
    }
}

// void print_leaf(Node *root)
// {
//     if (root == NULL)
//         return;
//     if (root->left == NULL && root->right == NULL)
//     {
//         cout << root->val << " ";
//     }

//     if (root->right)
//         print_leaf(root->right);
//     if (root->left)
//         print_leaf(root->left);
// }

int main()
{
    Node *root = input_tree();
    print_leaf(root);

    return 0;
}