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

void is_palindrome(Node *head)
{
    vector<int> v;
    Node *temp = head;
    while (temp != NULL)
    {
        v.push_back(temp->value);
        temp = temp->next;
    }

    vector<int> r;
    r=v;
    reverse(r.begin(), r.end());

    if(v==r){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    cout << "Enter your value here: ";
    int val;
    while (true)
    {

        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    is_palindrome(head);
    return 0;
}