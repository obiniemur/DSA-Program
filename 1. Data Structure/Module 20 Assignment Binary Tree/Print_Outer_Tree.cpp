// https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-05/challenges/print-outer-tree

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

vector<int> v;

void print_left(Node *root)
{
    if (root->left)
    {
        print_left(root->left);
        v.push_back(root->left->val);
    }
    else if (root->right)
    {
        print_left(root->right);
        v.push_back(root->right->val);
    }
}

void print_right(Node *root)
{
    if (root->right)
    {

        v.push_back(root->right->val);
        print_right(root->right);
    }
    else if (root->left)
    {

        v.push_back(root->left->val);
        print_right(root->left);
    }
}

int main()
{
    Node *root = input_tree();

    if(root->left){
        print_left(root);
    }
    v.push_back(root->val);
   if(root->right){
     print_right(root);
   }

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}