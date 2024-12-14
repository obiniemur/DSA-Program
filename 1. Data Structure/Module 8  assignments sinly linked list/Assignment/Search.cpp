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
        next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
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
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void search(Node *head, int x)
{

    Node *temp = head;
    int i = 0;
    bool flag = false;
    while (temp != NULL)
    {
        i++;
        if (temp->value == x)
        {
            cout << i - 1;
            flag = true;
            break;
        }
        temp = temp->next;
    }

    if (!flag)
    {
        cout << "-1";
    }

    cout << endl;
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {

            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val);
        }
        int x;
        cin >> x;
        search(head, x);
    }

    return 0;
}