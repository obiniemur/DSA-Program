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
class myStack
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
        Node *deletedNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deletedNode;
    }

    int top()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return (sz == 0);
    }
};
class myQueue
{
    list<int> q;

public:
    void push(int val)
    {
        q.push_back(val);
    }
    void pop()
    {
        q.pop_front();
    }
    int front()
    {
        return q.front();
    }
    int size()
    {
        return q.size();
    }
    bool empty()
    {
        return q.empty();
    }
};
int main()
{
    myStack st;
    myQueue q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }

    int stSize = st.size();
    int qSize = q.size();
    if (stSize != qSize)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}