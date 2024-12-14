#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    int b[n];
    vector<int>c;
    for(int i=0; i<n; i++){

      cin>>a[i];

    }

    for(int i=0; i<n; i++){

      cin>>b[i];

    }

    for(int val: b){
        c.push_back(val);
    }
    for(int val: a){
        c.push_back(val);
    }
   

    for(int val: c){
        cout<<val<<" ";
    }
    return 0;
}