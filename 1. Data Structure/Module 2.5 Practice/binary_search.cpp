#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++)
    {

        int x;
        bool f = false;
        cin >> x;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == x)
            {
                f = true;
               
            }
        }
        if (f)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}