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
    Node a(10), b(40);
    a.value = 10;
    b.value = 20;
    a.next = &b;
    b.next = NULL;

    cout << a.value << endl;
    cout << a.next->value << endl;
    return 0;
}