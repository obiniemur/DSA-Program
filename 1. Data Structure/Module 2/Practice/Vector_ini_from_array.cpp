#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40,50};
    vector<int> v(arr, arr+5);
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}