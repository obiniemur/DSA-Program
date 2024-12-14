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

void reverse_it(Node *head)
{
    Node *temp = head;
    if(temp == NULL) return;
    reverse_it(temp->next);
    cout<<temp->value<<" ";
}

int main()
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
    reverse_it(head);
    return 0;
}