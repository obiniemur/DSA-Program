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

class Queue1
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        

        sz++;
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deletedNode = head;
        head = head->next;
        delete deletedNode;
        if (head == NULL)
        {
            tail = NULL;
         
        }
    }
    int front()
    {
        return head->value;
    }

    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class Queue2
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
      

        sz++;
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deletedNode = head;
        head = head->next;
        delete deletedNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->value;
    }

    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class Queue3
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {

        sz++;
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        
        sz--;
        Node *deletedNode = head;
        head = head->next;
        delete deletedNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->value;
    }

    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    Queue1 q1;
    Queue2 q2;
    Queue3 q3;

    int n1;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        int q;
        cin >> q;
        q1.push(q);
        q3.push(q);
    }
  

    int n2;
    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        int q;
        cin >> q;
        q2.push(q);
        q3.push(q);
    }

  while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }

cout<<endl;

    while (!q2.empty())
    {
        
        cout << q2.front() << " ";
        q2.pop();
    }

    cout<<endl;

    while (!q3.empty())
    {
        
        cout << q3.front() << " ";
        q3.pop();
    }

    


    return 0;
}