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

void findDuplicate(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        Node *nextNode = temp;
        while (nextNode->next != NULL)
        {

            if (nextNode->next->value == temp->value)
            {

                Node *duplicate = nextNode->next;
                nextNode->next = nextNode->next->next;
                delete duplicate;
            }
            else
            {
                nextNode = nextNode->next;
            }
        }

        temp = temp->next;
    }

   
}

void printTheNode(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {

        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    findDuplicate(head);
    printTheNode(head);
    return 0;
}