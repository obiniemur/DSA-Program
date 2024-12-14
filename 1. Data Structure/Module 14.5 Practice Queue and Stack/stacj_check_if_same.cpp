/*
Question: Take two stacks of size N and M as input and check if both of them are the same or not.
Don’t use STL to solve this problem.
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

class Stack1
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
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deletNode = tail;
        tail = tail->prev;
        delete deletNode;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
    }

    int size()
    {
        return sz;
    }

    int top()
    {
        return tail->value;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Stack2
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
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deletNode = tail;
        tail = tail->prev;
        delete deletNode;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
    }

    int size()
    {
        return sz;
    }

    int top()
    {
        return tail->value;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack1 s1;
    Stack2 s2;

    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }

    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        s2.push(x);
    }

    int sizeofs1 = s1.size();
    int sizeofs2 = s2.size();

    if (sizeofs1 != sizeofs2)
    {
        cout << "NO";
    }
    else
    {
        bool flag = true;

        while (!s1.empty())
        {
            if(s1.top() != s2.top()){
                flag = false;
                break;

            }
            s1.pop();
            s2.pop();
        }
        if(flag){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }

    // while (!s1.empty())
    // {
    //     cout << s1.top() << " ";
    //     s1.pop();
    // }

    // cout << endl;

    // while (!s2.empty())
    // {
    //     cout << s2.top() << " ";
    //     s2.pop();
    // }

    return 0;
}