#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        stack<int> st;
    string s;
    cin>>s;

    for(char a:s){
        if(st.empty()){
            st.push(a);
        }else{
            if(a == '1' && st.top() == '0'){
                st.pop();
            }else{
                st.push(a);
            }
        }
    }

    if(st.empty()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

    return 0;
}