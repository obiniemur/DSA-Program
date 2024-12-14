#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    sort(arr, arr+n);

    int i=0;
    bool flag=false;
   while(i<n-1){
    if(arr[i] == arr[i+1]){
        flag=true;
        break;
    }
    i++;
   }
   


   if(flag){
    cout<<"Yes"<<endl;
   }else{
    cout<<"NO"<<endl;
   }

    
    return 0;
}