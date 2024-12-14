#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> s(5,n);

    for(int i=0; i<5; i++){

        cin>>s[i];
    }

    for(int i=0; i<5; i++){

        cout<<s[i]<<" ";
    }

    return 0;
}