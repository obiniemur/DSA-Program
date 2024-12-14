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

Node *convertArrayToBST(int a[], int size, int left, int right)
{
    if (left > right)
        return NULL;
    int mid = (left + right) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = convertArrayToBST(a, size, left, mid - 1);
    Node *rightRoot = convertArrayToBST(a, size, mid + 1, right);
    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Node *root = convertArrayToBST(a, n, 0, n - 1);
    level_order(root);

    return 0;
}