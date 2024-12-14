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

//This function add a new value to Tail
void insert_at_tail(Node *&head, int v) //Make sure to reference the pointer &head, other wise it will throw error or won't insert the new node
{

    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
       
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
};

//This function insert a value to any position instead of head
void insert_at_position(Node *head, int pos, int val){

    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
        if(temp==NULL){
            cout<<endl<<"Invalid Index"<<endl<<endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;

    cout<<endl<<endl<<"The value has been inserted "<<endl<<endl;
    

};

//This function will insert in our head
void insert_at_head(Node *&head, int val){
    Node *newNode = new Node(val);
    newNode->next = head; //first reference the current head to the newHead 
    head = newNode; //then update the old head with new head

    cout<<"Head inserted"<<endl<<endl;

};


//deleting node from specific position except head
void delete_from_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next; // go to the node which needs to be deleted
         if(temp==NULL){
            cout<<endl<<"Invalid Index"<<endl<<endl;
            return;
        }
    }
    if(temp->next==NULL){
            cout<<endl<<"Invalid Index"<<endl<<endl;
            return;
        }
    Node* deleteNode = temp->next; // put the deleted node into a new node
    temp->next = temp->next->next; //
    delete deleteNode;

    cout<<endl<<endl<<"Nod in this position: "<<pos<<" is deleted"<<endl<<endl;
    
}

//this function delete the head from linked list
void delete_head(Node *&head){
    if(head == NULL){
        cout<<endl<<"Head is already empty"<<endl<<endl;
        return;
    }
    Node *deletedNode =  head;//keep the current head in a temp variable
    head = head->next;
    delete deletedNode;
    cout<<endl<<"Deleted Position from head "<<endl<<endl;
}

void printTheNode(Node *head){

    cout<<"Value in Node: ";
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
        cout << "Option 3: Insert at specific position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: Delete from a position" << endl;
        cout << "Option 6: Delete Head" << endl;
        cout << "Option 7: Terminate the Program" << endl;

        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
            
        }
        else if(op==2){
            printTheNode(head);
        }
        else if(op==3){
            cout<<"Enter the position: ";
            int pos;
            cin>>pos;
            cout<<"Enter a value: ";
            int val;
            cin>>val;
            if(pos==0){
                insert_at_head(head, val);
            }else{
                insert_at_position(head, pos, val);
            }
            
            
        }
        else if(op==4){

            cout << "Enter a value: ";
            int val;
            cin >> val;
            insert_at_head(head, val);

        }
        else if(op==5){
            cout<<"Enter a position to delete the node from: ";
            int pos;
            cin>>pos;
            if(pos==0){
                delete_head(head);
            }else{
                delete_from_position(head, pos);
            }
            
        }
        else if(op==6){
            delete_head(head);
        }
        else if(op==7){
            break;
        }
    }

    return 0;
}