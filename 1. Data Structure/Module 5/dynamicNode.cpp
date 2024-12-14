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
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    head->next = a;

    cout<<head->next->value<<endl;
    
    return 0;
}