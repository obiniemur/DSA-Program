#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_node(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
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

    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;
    Node *cur = head;
    while (q--)
    {
        Node *temp = head;
       

        string command;
        cin >> command;
        if (command == "visit")
        {
            string site;
            cin >> site;
            bool flag = false;

            while (temp != NULL)
            {
                if (temp->val == site)
                {

                    cur = temp;
                    cout << cur->val << endl;
                    flag = true;
                    break;
                }
                temp = temp->next;
                
            }
            if(!flag){
                    cout<<"Not Available"<<endl;
                }
        }
        else if (command == "prev")
        {
            if (cur != NULL && cur->prev != NULL)
            {
                cur = cur->prev;
                cout << cur->val << endl;
            }
            else
            {

                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (cur->next != NULL)
            {
                cur = cur->next;
                cout << cur->val << endl;
            }
            else
            {

                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}