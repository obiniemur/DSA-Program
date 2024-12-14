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

int heighTree(Node *root)
{
    if (root == NULL)
        return 0;
    int l = heighTree(root->left);
    int r = heighTree(root->right);
    return max(l, r) + 1;
}

void nodeLevel(Node *root, int levelNumber)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    vector<int> v;

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if (level == levelNumber)
        {
            v.push_back(node->val);
        }

        if (node->left)
        {
            q.push({node->left, level + 1});
        }

        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }

    for (int i : v)
    {
        cout << i << " ";
    }
}

int main()
{
    Node *root = input_tree();
    int h = heighTree(root);
    int val;
    cin >> val;

    if (val >= h)
    {
        cout << "Invalid" << endl;
    }
    nodeLevel(root, val);

    return 0;
}