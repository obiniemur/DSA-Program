#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     vector<int> arrA(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arrA[i];
    }
    int b;
    cin>>b;
    vector<int> arrB(b);
     for (int i = 0; i < b; i++)
    {
        cin>>arrB[i];
    }
    int x;
    cin>>x;
  reverse(arrB.begin(), arrB.end());
   

   for (int i = 0; i < b; i++)
   {
    int test = arrB[i];
    arrA.insert(arrA.begin()+x, test);
   }

   for (int i = 0; i < n+b; i++)
   {
   cout<<arrA[i]<<" ";
   }
   





    
    return 0;
}