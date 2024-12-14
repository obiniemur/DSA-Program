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

void insert_Tail(Node *&head, Node *&tail, int val)
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
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;

}

int size(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int query;
    cin >> query;

    while (query--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head,tail, v);
             print_normal(head);
        }
        else if(x == 1){
            insert_Tail(head, tail, v);
             print_normal(head);
        }else if(x > size(head)){
            cout<<x<<" is greater than the size"<<"INVALID"<<endl;
        }
       
    }

    

    return 0;
}