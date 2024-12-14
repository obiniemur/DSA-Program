#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin>>n>>q;
    int a[n];
     
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int l, r;
    for (int i = 0; i < q; i++)
    {
     long long int sum=0; 
        cin>>l>>r;
          
        for(int j=l-1; j<=r-1; j++){
           
            sum += a[j];
        }
         cout<<sum<<endl;
        
   
       
    }
        


    
    

    

    return 0;
}