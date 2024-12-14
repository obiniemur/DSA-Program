/*
Question: Take two doubly linked lists as input and check if they are the same or not.
*/


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

void print_normal(Node *head)
{
    /*Complexity O(N)*/
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

// void print_reverse(Node *tail)
// {
//     /*Complexity O(N)*/
//     Node *temp = tail;
//     while (temp != NULL)
//     {
//         cout << temp->value << " ";
//         temp = temp->prev;
//     }
//     cout << endl;
// }

void print_reverse(Node *tail){
    Node *temp =tail;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

int size(Node* head){
    Node *temp = head;
    int count=0;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void are_they_same(Node *head, Node *head2){
    int f = size(head);
    int s = size(head2);
    Node *temp = head;
    Node *temp2 = head2;
    bool flag=true;

    if( f != s){
        cout<<"NO"<<endl;
        return;
    }else{

        while(temp != NULL){
            if(temp->value != temp2->value){
                flag=false;
                break;

            }
            temp = temp->next;
            temp2 = temp2->next;
        }

    }

    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    /*Complexity O(1)*/
    Node *newNode = new Node(val);

    /*What if there is no Node, that's mean tail is empty.
    In this case, we will have sagmentation fault since we won't be able to insert in tail anymore,
    In this case, we have to check if the tail is NULL, if it is then directly assign newNode to tail and head and return*/

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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
        
    }
    int val2;

    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_at_tail(head2, tail2, val2);
        
    }

    are_they_same(head, head2);

    print_normal(head);
     print_reverse(tail);
    print_normal(head2);
    // print_reverse(tail2);

    return 0;
}