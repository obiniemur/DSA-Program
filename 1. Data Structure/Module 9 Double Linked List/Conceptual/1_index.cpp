#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

int sz=0;

void insertAtTail(Node*& head, Node *&tail, int val)
{
    sz++;
    Node *newNode = new Node(val);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}

int size(){
    return sz;
}
void printList(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(1){
        int val;
        cin>>val;
        if(val == -1) break;
        insertAtTail(head, tail, val);

    }
    printList(head);
   int t =  size();
   cout<<t<<" ";

    return 0;
}