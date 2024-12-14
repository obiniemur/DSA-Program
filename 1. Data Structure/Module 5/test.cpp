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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node *Temp = head;
    while (Temp != NULL)
    {
        cout << Temp->value << endl;
        Temp = Temp->next;
    }
    //to run the loop again we have set the Temp to head again.
   int Sum = 0;
Temp = head;
while ( Temp->next != NULL){
	Sum += Temp-> value;
	Temp = Temp -> next;
    // cout<<Sum;
}
// Sum -= Temp -> value;

cout<<Sum;



    return 0;
}