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

void are_these_same(Node *head, Node *head2)
{
    vector<int> first;
    vector<int> second;
    Node *temp = head;
    Node *temp1 = head2;
    while (temp != NULL)
    {
        first.push_back(temp->value);
        temp = temp->next;
    }
    while (temp1 != NULL)
    {
        second.push_back(temp1->value);
        temp1 = temp1->next;
    }
    

    if(first == second){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    // cout << "Enter your value here: ";
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
    are_these_same(head, head2);
    return 0;
}