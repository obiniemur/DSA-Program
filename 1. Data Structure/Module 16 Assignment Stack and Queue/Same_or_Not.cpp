#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;

    int n, m;
    cin>>n>>m;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        st.push(a);
    }

    for (int i = 0; i < m; i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }

    int stSize  = st.size();
    int qSize = q.size();

    if(stSize != qSize){
        cout<<"NO"<<endl;
    }else{
        bool flag = true;
        while(!st.empty()){
            if(st.top() != q.front()){
                flag = false;
                break;
            }   
            st.pop();
            q.pop();
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}