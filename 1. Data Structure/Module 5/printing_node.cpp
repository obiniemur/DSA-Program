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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
    //to run the loop again we have set the temp to head again.
    temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }


    return 0;
}