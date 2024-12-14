#include<bits/stdc++.h>
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

void insert_at_tail(Node *&head, Node *tail, int v){
    Node *newNode = new Node(v);
    if(head ==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    tail = newNode;
}

void print_Node(Node *head){

    Node *temp =head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp= temp->next;
    }
}

void find_my_size(Node *head){
    Node *temp = head;
    int count = 0;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    cout<<endl<<endl<<"The size of the linked list is: "<<count<<endl<<endl;
}

void find_duplicate(Node *head){
    Node *temp = head;
    vector<int> fre(100);
    bool hasD=false;
    while(temp != NULL){
        fre[temp->value]++;
        temp= temp->next;
    }

    for (int i = 0; i < 100; i++)
    {
        if(fre[i]> 1){
            hasD = true;
            break;
        }
    }

    if(hasD){
        cout<<endl<<endl<<"YES"<<endl<<endl;
    }else{
        cout<<endl<<endl<<"NO"<<endl<<endl;
    }
    
    
}




int main()
{
    Node *head=NULL;
    Node *tail =NULL;
    cout<<"Enter a value: ";
    while(true){
        int v;
    cin>>v;
    if(v==-1)break;
    insert_at_tail(head,tail, v);
 
    }
       print_Node(head);
       find_my_size(head);
       find_duplicate(head);
    
    return 0;
}