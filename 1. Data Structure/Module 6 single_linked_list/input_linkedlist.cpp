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

void insert_at_tail(Node *&head, int v)
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
}

void print_all_list(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void count_the_head(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {

        count++;
        temp = temp->next;
    }

    cout << endl
         << endl
         << "The count of the Node is: " << count << endl
         << endl;
};

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;

    cout << endl
         << endl
         << "Value inserted in: " << pos << endl
         << endl;
}

void insert_at_head(Node *&head, int val){
    Node *newNode = new Node(val);
    if(head ==NULL){
        newNode->next = head;
        head = newNode;
    }

    cout<<endl<<endl<<"Inserted into head"<<endl<<endl;
}

void delete_from_head(Node *&head){
    Node *deletedHead = head;
    head = head->next;
    delete deletedHead;
    cout<<endl<<"Deleted from head "<<endl<<endl;
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
        cout << "Option 6: Count total Node" << endl;
        cout << "Option 7: Delete from head" << endl;
        cout << "Option 8: Terminate the Program" << endl;

        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_all_list(head);
        }
        else if (op == 3)
        {
            cout << "Enter the position: ";
            int pos;
            cin >> pos;
            cout << "Enter a value: ";
            int val;
            cin >> val;
            if (pos == 0)
            {
                 insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }
        else if (op == 4)
        {

            cout << "Enter a value: ";
            int val;
            cin >> val;
             insert_at_head(head, val);
        }
        else if (op == 5)
        {
            cout << "Enter a position to delete the node from: ";
            int pos;
            cin >> pos;
             //delete_from_position(head, pos);
        }
        else if (op == 6)
        {
            count_the_head(head);
        }else if(op==7){
             delete_from_head(head);
        }
        else if (op == 8)
        {
            break;
        }
    }

    return 0;
}