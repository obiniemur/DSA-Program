#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;

    int q;
    cin >> q;
    int sz = myList.size();
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2)
        {
           if (v >= 0 && v < (int) myList.size())
            {
               auto it = myList.begin();
                for (int i = 0; i < v; ++i)
                {
                    ++it;
                }
                myList.erase(it);
            }
        }

        cout << "L -> ";

        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;

        myList.reverse();
        cout << "R -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;
        myList.reverse();
    }

    return 0;
}