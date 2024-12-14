#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int f;
    cin >> f;
    int l = 0, r = n - 1;
    int count = 0;
    while (l <= r)
    {

        int middle = (l + r) / 2;
        if (f == a[middle])
        {
           if(f==a[middle+1]){
            count++;
           }
           if(f==a[middle-1]){
            count++;
           }
        }
        if (f > a[middle])
        {
            l = middle + 1;
        }
        else
        {
            r = middle - 1;
        }
    }
    if(count>1){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    return 0;
}