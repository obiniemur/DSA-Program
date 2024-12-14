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

void insert_at_tail(Node *&head, Node *tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    tail = newNode;
}

void print_Node(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout<<endl<<endl;
}

void find_my_size(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << endl
         << endl
         << "The size of the linked list is: " << count << endl
         << endl;
}

void find_duplicate(Node *head)
{
    Node *temp = head;
    vector<int> fre(100);
    bool hasD = false;
    while (temp != NULL)
    {
        fre[temp->value]++;
        temp = temp->next;
    }

    for (int i = 0; i < 100; i++)
    {
        if (fre[i] > 1)
        {
            hasD = true;
            break;
        }
    }

    if (hasD)
    {
        cout << endl
             << endl
             << "YES" << endl
             << endl;
    }
    else
    {
        cout << endl
             << endl
             << "NO" << endl
             << endl;
    }
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<endl<<endl<<"Inserted at head"<<endl<<endl;
}

void insert_at_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    cout << endl
         << endl
         << "Inserted at: " << pos << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout<<"Enter your query: ";
    int q;
    cin >> q;
    while (q--)
    {
        cout<<"Enter a position and a value: "<<endl;
        int pos, val;
        cin >> pos >> val;
        if(pos==0){
            insert_at_head(head, val);
        }else{
            insert_at_pos(head, pos, val);
        }

        print_Node(head);
        
    }

    return 0;
}