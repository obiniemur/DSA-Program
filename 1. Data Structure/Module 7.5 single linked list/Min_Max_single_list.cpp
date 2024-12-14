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

void min_max(Node *head)
{

    Node *temp = head;
    int mn = INT_MAX;
    int mx = INT_MIN;

    while(temp != NULL){
        if(temp->value < mn){
            mn = temp->value;
        }else if (temp->value > mx){
            mx = temp->value;
        }

        temp = temp->next;
    }

    cout<<"Max: "<<mx<<endl<<"Min: "<<mn<<endl;
   
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
    min_max(head);
    return 0;
}