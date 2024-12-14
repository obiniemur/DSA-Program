#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{
    /*Complexity O(N)*/
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    /*Complexity O(N)*/
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
    /*Complexity O(N)*/
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    // imagine this as linked nodes 10 20 30 40  and my position is 2
    // In this case, this avobe array will take temp to till 20
    // Imagine the new Node is 100
    newNode->next = temp->next;    // 100 is connected to 30
    temp->next = newNode;          // 20 is connected to 100
    newNode->next->prev = newNode; // connecting 100 to 30 prev
    newNode->prev = temp;          // connecting 20 to 100 prev
}
void insert_head(Node *&head, Node *&tail, int val)
{
    /*Complexity O(1)*/
    Node *newNode = new Node(val);
    /*Check if the node is already NULL
    if it is null, make the newNode as head and return it.*/

    if (head == NULL) // if head is NULL, that's mean the first node that will be inserted is head and tail both.
    {
        head = newNode;
        tail = newNode;
        return;
    }

    /*If head is not NULL, the next statments will execute*/

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    /*Complexity O(1)*/
    Node *newNode = new Node(val);

    /*What if there is no Node, that's mean tail is empty.
    In this case, we will have sagmentation fault since we won't be able to insert in tail anymore,
    In this case, we have to check if the tail is NULL, if it is then directly assign newNode to tail and head and return*/

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int size(Node *head)
{
    /*Complexity O(N)*/
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid: the position is greater than the head size" << endl;
    }
    else if (pos == 0)
    {
        insert_head(head, tail, val);
    }
    else if (pos == size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        insert_at_position(head, pos, val);
    }
    print_normal(head);
    print_reverse(tail);

    return 0;
}