#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) // O(n)
    {
        cin >> arr[i];
    }
    reverse(arr, arr + n);
    int suma[n];

    for (int i = 0; i < n; i++) // O(n)
    {
        int sum = 0;
        for (int j = i + 1; j < n; j++) // O(n)
        {

            sum += arr[j];
        }

        suma[i] = sum;
    }
    reverse(suma, suma + n);
    for (int i = 0; i < n; i++)
    {
        cout << suma[i] << " ";
    }
    return 0;
}