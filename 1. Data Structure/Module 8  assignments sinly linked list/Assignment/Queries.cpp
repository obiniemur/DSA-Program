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

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    if(head != NULL){

        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
       

    }else{
        tail->next = newNode;
        tail = newNode;
    }
    
}

void insert_head(Node *&head, int val)
{
    
     Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void delete_vth(Node *head, int v)
{

   if(head == NULL){
    return;
   }
    Node *temp = head;
    for (int i = 1; i <=v - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {

            return;
        }
    }

    if (temp->next == NULL)
    {
      
        return;
    }

    Node *deleteNoe = temp->next;
    temp->next = temp->next->next;
    delete deleteNoe;
}
void deleteHead(Node *&head){
    if(head == NULL){
        return;
    }
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {

        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, v);
            print_linked_list(head);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
            print_linked_list(head);
        }
        else if (x == 2)
        {
            if(v==0){
                deleteHead(head);
                print_linked_list(head);
            }else{
                delete_vth(head, v);
            print_linked_list(head);
            }
            
        }
    }

    return 0;
}