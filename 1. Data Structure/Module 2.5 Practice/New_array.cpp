#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    vector<int> c;
    for (int i = 0; i <=n; i++)
    {
        cin>>a[i]>>b[i];
    }

    cout<<endl;

    for (int i = 0; i < n; i++)
    {
                cout<<a[i]<<" ";

        c.push_back(b[i]);
        

    }

    
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
        // c[i]=a[i];
        c.push_back(a[i]);
        

    }

    cout<<endl;

    for(int val:c){
        cout<<val<<" ";
    }
    
    
    return 0;
}