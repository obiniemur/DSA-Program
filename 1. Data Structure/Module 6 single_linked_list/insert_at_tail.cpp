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

void insert_at_tail(Node *&head, int v) //Make sure to reference the pointer &head, other wise it will throw error or won't insert the new node
{

    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout<<head<<"test"<<endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
};

void printTheNode(Node *head){

    cout<<"Value in Node:";
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }

    cout<<endl;


}

int main()
{
    Node *head = NULL;
    

    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print The Tail" << endl;
        cout << "Option 3: Terminate the Program" << endl;

        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a value";
            int v;
            cin >> v;
            insert_at_tail(head, v);
            cout<<head<<"from main"<<endl;
        }
        else if(op==2){
            printTheNode(head);
        }
        else if(op==3){
            break;
        }
    }

    return 0;
}