#include <bits/stdc++.h>
using namespace std;
int main()
{
    // type-1
    vector<vector<int>> arr1; // this is a vector of a vector. this it is a 2d array

    arr1.push_back(vector<int>({1, 2, 3, 4})); // I'm pushing a vector of value to a vector now.
    arr1.push_back(vector<int>({4, 5, 6}));

    cout << arr1.size() << endl;    // this will print the total row of the vector.
    cout << arr1[0].size() << endl; // this will print the value of each index hold, another words all column

    for (int i = 0; i < arr1.size(); i++)
    { // outer loop which will access each index of vector. another words it will loop thru rows
        for (int j = 0; j < arr1[i].size(); j++)
        { // each index of this vector holds another vector, this will get the values from inner vector. another words it will loop thru each rows columns

            cout << arr1[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}