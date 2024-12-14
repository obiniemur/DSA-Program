#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    stack<int> c;
    stack<int> t;


    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       int x;
       cin>>x;
       s.push(x);
    }

    t=s;



    while(!t.empty()){
        c.push(t.top());
        t.pop();
    }
    
    while(!c.empty()){
        cout<<c.top()<<" ";
        c.pop();
    }
    

    return 0;
}