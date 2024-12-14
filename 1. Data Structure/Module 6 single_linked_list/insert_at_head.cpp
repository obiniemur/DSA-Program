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
        cout << "Option 5: Terminate the Program" << endl;

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
            break;
        }
    }

    return 0;
}