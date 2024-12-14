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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl <<endl;
}

void min_max(Node *head)
{
    int mn = INT_MAX;
    int mx = INT_MIN;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value < mn)
        {
            mn = temp->value;
        }
        else if (temp->value > mx)
        {
            mx = temp->value;
        }

        temp = temp->next;
    }

    cout << mn << " " << mx;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "enter a value: ";

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1) break;
         insert_tail(head, tail, val);
        
       
      
    }
     print_linked_list(head);
     min_max(head);
    return 0;
}