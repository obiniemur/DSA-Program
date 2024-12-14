#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        stack<int> st;

        string s;

        cin >> s;

        for (char a : s)
        {
            if (st.empty())
            {
                st.push(a);
            }
            else
            {
                if (a == '0' && st.top() == '1')
                {
                    st.pop();
                }
                else if (a == '1' && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(a);
                }
            }
        }

        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}