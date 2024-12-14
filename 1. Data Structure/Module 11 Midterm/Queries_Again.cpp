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

void print_normal(Node *head)
{

    Node *temp = head;
    cout<<"L -> ";
    while (temp != NULL)
    {
        cout<< temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{

    Node *temp = tail;
     cout<<"R -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout<<endl;
   
 
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

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
void insert_at_position(Node *head, int pos, int val)
{
    
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x > size(head))
        {
            cout << "Invalid"<<endl;
            continue;
        }
        else if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == size(head))
        {
            insert_at_tail(head, tail, v);
        }
        else
        {
            insert_at_position(head, x, v);
        }

        print_normal(head);
        print_reverse(tail);
    }

    return 0;
}