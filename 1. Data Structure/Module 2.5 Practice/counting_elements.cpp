#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count=0;


    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    // for(int val: a){
    //     cout<<val<<" ";
    // }

    for (int i = 0; i < n-1; i++)
    {
        int sum = a[i]+1;
      for(int j=i+1; j<n; j++){

        if(a[j] == sum){
            count++;
        }

      }

    }

    cout<<count<<" ";
    


  
    
    return 0;
}