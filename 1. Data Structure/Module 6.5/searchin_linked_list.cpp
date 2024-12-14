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

    cout << endl
         << endl;
}

void search_val(Node *head, int val){
    Node *temp = head;
    bool fnd = false;
    while(temp != NULL){
        if(temp->value == val){
            fnd = true;
        }
        temp = temp->next;
    }

    if(fnd){
        cout<<"The value is found"<<endl;
    }else{
        cout<<"The value is not found"<<endl;
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
    int x;
    cin>>x;
    search_val(head, x);
    return 0;
}