/*
Question: Take a stack of size N and a queue of size M as input.
Then check if both of them are the same or not in the order of removing.
You should use STL to solve this problem.

5
10 20 30 40 50
5
50 40 30 20 10
OutPut: Yes

5
10 20 30 40 50
5
10 20 30 40 50
OutPut: NO

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;

    int n1;
    cin>>n1;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }

    int n2;
    cin>>n2;

    for (int i = 0; i < n2; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    int sSize = s.size();
    int qSize = q.size();

    if(sSize != qSize){

        cout<<"NO";
    }else{
        bool flag = true;
        while(!s.empty()){
            if(s.top() != q.front()){
                flag = false;
                break;
            }
            s.pop();
            q.pop();
            
        }

        if(flag){
            cout<<"Yes";
        }else{
            cout<<"NO";
        }
    }    
    


    return 0;
}