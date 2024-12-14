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

int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

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

void print_linked_list(Node *head)
{
    Node *temp = head;
    int sz = size(head);
    if (sz % 2 > 0)
    {
        for (int i = 0; i < sz / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->value;
    }
    else if (sz % 2 == 0)
    {

        for (int i = 0; i < sz / 2 - 1; i++)
        {
            temp = temp->next;
        }

        cout << temp->value << " " << temp->next->value;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    cout << "Enter your value here: ";
    int val;
    while (true)
    {

        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_linked_list(head);
    return 0;
}