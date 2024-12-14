#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   bool flag = true;


   for(int i=0; i<n-1; i++){
    for(int j= i+1; j<n;j++){
        if(arr[i] == arr[j]){
            flag = false;
            break;
        }
    }
   }
 

    if (!flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}