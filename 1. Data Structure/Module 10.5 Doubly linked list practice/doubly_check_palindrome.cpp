/*
    Question: Take a doubly linked list as input and check if it forms any palindrome or not.
*/
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

void check_palindrom(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    bool flag = true;

    while (i != j && i->next != j)
    {
        if (i->value != j->value)
        {
            flag = false;
        }
        i = i->next;
        j = j->prev;
    }

    if (i->value != j->value)
    {
        flag = false;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }
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
        insert_at_tail(head, tail, val);
    }

    print_normal(head);
    print_reverse(tail);
    check_palindrom(head, tail);

    return 0;
}