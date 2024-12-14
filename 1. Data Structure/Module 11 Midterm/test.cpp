#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {1, 2, 4, 5, 6, 7, 5};

    int val;
    cin >> val;

    auto it = find(myList.begin(), myList.end(), val);
    cout<<*it<<endl;
    if (it != myList.end())
    {
        
        myList.erase(it);
    }

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}