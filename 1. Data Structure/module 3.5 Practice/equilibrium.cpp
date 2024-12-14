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

    int l = 0, r = n - 1;
    int leftSum = 0;
    int rightSum = 0;
    int middle = (l + r) / 2;
    int flag = true;

    // cout<<middle<<" ";

    for (int i = 0; i < middle; i++)
    {
        leftSum += arr[i];
    }
    for (int i = middle + 1; i < n; i++)
    {
        rightSum += arr[i];
    }

    while (flag)
    {
        if (leftSum == rightSum)
        {
            cout << middle<<endl;
            flag = false;
        }
        if(leftSum < rightSum){
            middle = middle-1;
            
        }

        if(leftSum > rightSum){
            middle = middle+1;
            cout<<middle<<endl;
        }
    }

    cout << "Left Sum is: " << leftSum << endl;
    cout << "Right Sum is: " << rightSum << endl;

    return 0;
}