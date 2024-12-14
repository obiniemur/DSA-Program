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

int size(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void is_size_same(Node *head, Node *head2){
    int firsthead = size(head);
    int secondHead = size(head2);
    if(firsthead == secondHead){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

   
    int val;
    int val2;
    while (true)
    {

        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    while (true)
    {

        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head2, tail2, val2);
    }
    is_size_same(head, head2);
    return 0;
}