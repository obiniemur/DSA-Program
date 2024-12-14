#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    // st.push(10);
    // st.push(30);
    // st.push(40);
    // st.push(50);

    // // cout<<st.top()<<endl;
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // // cout<<st.top()<<endl;

    // if(!st.empty()) {
    //     cout<<st.top()<<endl;
    // }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}